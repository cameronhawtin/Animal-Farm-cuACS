#include <iostream>
#include <iomanip>
#include <string>
#include "CuacsAPI.h"

using namespace std;

CuacsAPI::CuacsAPI()
{
	ps = PersistentStorageAPI();
	animals = ps.retrieveProfiles("Animal");
    availableId = animals->size();
}

vector<Animal*> CuacsAPI::getAnimals()
{
	vector<Animal*> shipAnimals = vector<Animal*>();
	for(Profile* a: animals)
	{
		shipAnimals.push_back(dynamic_cast<Animal*>(a));
	}
	return shipAnimals;
}

void CuacsAPI::addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size)
{
    availableId = availableId + 1;
	ps.storeProfile(new Animal(availableId, name, animalType, breed, age,gender, color, size), "Animal");
}

CuacsAPI::~CuacsAPI()
{
	while(animals->size() > 0){
		delete animals->pop_front();
	}
	delete animals;
}

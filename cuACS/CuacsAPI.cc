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
	vector<Animal*>* shipAnimals = new vector<Animal*>();
	for(Profile* a: *animals)
	{
		shipAnimals->push_back(dynamic_cast<Animal*>(a));
	}
	vector<Animal*> ret = *shipAnimals;
	delete shipAnimals;
	return ret;
}

void CuacsAPI::addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size)
{
    availableId = availableId + 1;
	ps.storeProfile(new Animal(availableId, name, animalType, breed, age,gender, color, size), "Animal");
}

void CuacsAPI::addHuman(string name, int age)
{
    availableId = availableId + 1;
    ps.storeProfile(new Human(availableId, name, age), "Human");
}

CuacsAPI::~CuacsAPI()
{
	while(animals->size() > 0){
		Profile* temp = animals->front();
		animals->pop_front();
		delete temp;
	}
	delete animals;
}

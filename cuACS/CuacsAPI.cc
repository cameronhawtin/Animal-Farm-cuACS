#include <iostream>
#include <iomanip>
#include <string>
#include "CuacsAPI.h"

using namespace std;

void CuacsAPI::init()
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
	return *shipAnimals;
}

void CuacsAPI::addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size)
{
    availableId = availableId + 1;
	ps.storeProfile(new Animal(availableId, name, animalType, breed, age,gender, color, size), "Animal");
}

void CuacsAPI::end()
{
	ps.storeProfiles(animals, "Animal");
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "cuacsApi.h"
#include "PersistantStorageAPI.h"

void cuacsApi::init()
{
	PersistantStorageAPI persistantStorage = new PersistantStorageAPI();
	animals = retrieveProfiles("Animal");
}

vector<Animal> cuacsApi::getAnimals()
{
	vector<Profile> shipAnimals = new vector<Animal>();
	for(Animal* a: animals)
	{
		vector.push_back(a);
	}
	return shipAnimals;
}

bool cuacsApi::addAnimal(string name, string animalType, string breed, int age, char gender, string color, string size)
{
	storeProfile(new Animal(0, name, animalType, breed, age,gender, color, size), "Animal");
}

void cuacsApi::end()
{
	storeProfiles(animals, "Animal");
}
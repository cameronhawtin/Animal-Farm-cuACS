#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "CuacsAPI.h"
#include "Profile.h"

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

//int main(int argc, char const *argv[]) {
//    CuacsAPI capi;
//    capi.init();
//    vector<Animal*> vec = capi.getAnimals();
//    cout << vec.size() << endl;
//    cout << vec.at(0)->getSize() << endl;
//    return 0;
//}

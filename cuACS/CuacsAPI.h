#ifndef CUACSAPI_H
#define CUACSAPI_H

#include "Profile.h"
#include "Animal.h"
#include "PersistentStorageAPI.h"

class CuacsAPI
{
	public:
		CuacsAPI();
		vector<Animal*> getAnimals();
		void addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size);
		~CuacsAPI();

	private:
		list<Profile*>* animals;
        int availableId;
		PersistentStorageAPI ps;
};

#endif

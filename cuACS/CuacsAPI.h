#ifndef CUACSAPI_H
#define CUACSAPI_H

#include "Profile.h"
#include "Animal.h"
#include "Human.h"
#include "PersistentStorageAPI.h"

class CuacsAPI
{
	public:
		CuacsAPI();
		vector<Animal*> getAnimals();
		void addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size);
        void addHuman(string name, int age);
		~CuacsAPI();

	private:
		list<Profile*>* animals;
        	int availableId;
		PersistentStorageAPI ps;
};

#endif

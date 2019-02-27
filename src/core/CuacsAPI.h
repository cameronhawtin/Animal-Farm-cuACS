#ifndef CUACSAPI_H
#define CUACSAPI_H

#include "Profile.h"
#include "Animal.h"
#include "PersistentStorageAPI.h"

class CuacsAPI
{
	public:
		void init();
		vector<Animal*> getAnimals();
		void addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size);
		void end();
	
	private:
		list<Profile*>* animals;
        int availableId;
		PersistentStorageAPI ps;
};

#endif

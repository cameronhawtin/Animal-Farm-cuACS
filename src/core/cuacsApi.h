#ifndef CUACSAPI_H
#define CUACSAPI_H

#include "Profile.h"
#include "Animal.h"
#include "PersistentStorageAPI.h"

class cuacsApi
{
	public:
		void init();
		vector<Animal> getAnimals();
		bool addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size);
		void end();


	private:
		list<Profile> animals;
};
#endif

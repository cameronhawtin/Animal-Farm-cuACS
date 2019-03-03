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
        vector<Human*> getHumans();
        void addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size,
                       int aggression, int attachment, int obedience, string energy, bool isCrateTrained, bool isHypoallergenic,
                       bool isNeutered, int childrenComfort, int loudness, float cost, float costPerYear, int intelligence, int cleanliness);
        void addHuman(string name, int age, string gender, string purpose, int attachment, int patience, string homeType,
                      string travel, string allergies, int noiseTolerance, bool needFertile, int numChildren,
                      string salary, float budget, string freeTime);
		~CuacsAPI();

	private:
		list<Profile*>* animals;
        list<Profile*>* humans;
        int availableAnimalId;
        int availableHumanId;
		PersistentStorageAPI ps;
};

#endif

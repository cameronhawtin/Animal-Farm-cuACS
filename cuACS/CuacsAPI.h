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
                       bool isNeutered, int childrenComfort, int loudness, float cost, float costPerYear, int intelligence, int cleanliness, int playfulness, int loyalty, int lifeExp);
        void addHuman(string name, int age, string gender, string typePreference, string purpose, int attachment, int patience, string homeType,
                      string travel, string allergies, int noiseTolerance, bool needFertile, int numChildren,
                      string salary, float budget, string freeTime, string email, string address, string phone);
        void editAnimal(int id, string name, string animalType, string breed, int age, string gender, string color, string size,
                       int aggression, int attachment, int obedience, string energy, bool isCrateTrained, bool isHypoallergenic,
                       bool isNeutered, int childrenComfort, int loudness, float cost, float costPerYear, int intelligence, int cleanliness, int playfulness, int loyalty, int lifeExp);
        void editHuman(int id, string name, int age, string gender, string typePreference, string purpose, int attachment, int patience, string homeType,
                      string travel, string allergies, int noiseTolerance, bool needFertile, int numChildren,
                      string salary, float budget, string freeTime, string email, string address, string phone);
		~CuacsAPI();

	private:
		list<Profile*>* animals;
        list<Profile*>* humans;
        int availableAnimalId;
        int availableHumanId;
		PersistentStorageAPI ps;
};

#endif

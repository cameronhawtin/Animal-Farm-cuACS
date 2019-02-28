#ifndef ANIMAL_H
#define ANIMAL_H

#include "Profile.h"

class Animal: public Profile
{
    public:
        Animal(int id, string name, string animalType, string breed, int age, string gender, string color, string size,
               int aggression, int attachment, int obedience, string energy, bool isCrateTrained, bool isHypoallergenic,
               bool isNeutered, int childrenComfort, int loudness, float cost, float costPerYear, int intelligence, int cleanliness);
		Animal(vector<string> statendife);
		int getId();
		string getName();
		string getAnimalType();
		string getBreed();
		int getAge();
		string getGender();
		string getColor();
		string getSize();

        int getAggression();
        int getAttachment();
        int getObedience();
        string getEnergy();
        bool getIsCrateTrained();
        bool getIsHypoallergenic();
        bool getIsNeutered();
        int getChildrenComfort();
        int getLoudness();
        float getCost();
        float getCostPerYear();
        int getIntelligence();
        int getCleanliness();

		vector<string>* getState();

	private:
		int id;
		string name;
		string animalType;
		string breed;
		int age;
		string gender;
		string color;
		string size;

        int aggression;
        int attachment;
        int obedience;
        string energy;
        bool isCrateTrained;
        bool isHypoallergenic;
        bool isNeutered;
        int childrenComfort;
        int loudness;
        float cost;
        float costPerYear;
        int intelligence;
        int cleanliness;
};

#endif

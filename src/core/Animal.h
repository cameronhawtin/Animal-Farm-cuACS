#ifndef ANIMAL_H
#define ANIMAL_H

#include "Profile.h"

class Animal: public Profile
{
    public:
        Animal(int id, string name, string animalType, string breed, int age, string gender, string color, string size);
		Animal(vector<string> statendife);
		int getId();
		string getName();
        string getAnimalType();
        string getBreed();
        int getAge();
        string getGender();
		string getColor();
		string getSize();
    vector<string> getState();

    private:
		int id;
		string name;
        string animalType;
        string breed;
        int age;
        string gender;
		string color;
		string size;
};

#endif

#ifndef ANIMAL_H
#define ANIMAL_H

#include "Profile.h"

class Animal : public Profile
{
    public:
        Animal(int id, string name, string animalType, string breed, int age, char gender);
		int getId();
		string getName();
        string getAnimalType();
        string getBreed();
        int getAge();
        char getGender();

    private:
		int id;
		string name;
        string animalType;
        string breed;
        int age;
        char gender;
};

#endif
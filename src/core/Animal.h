#ifndef ANIMAL_H
#define ANIMAL_H

#include "Profile.h"

enum Gender {M, F};
enum Size {SMALL, MEDIUM, LARGE};

class Animal : public Profile
{
    public:
        Animal(int id, string name, string animalType, string breed, int age, Gender gender, string color, Size size);
		Animal(vector<string> state);
		int getId();
		string getName();
        string getAnimalType();
        string getBreed();
        int getAge();
        Gender getGender();
		string getColor();
		Size getSize();

    private:
		int id;
		string name;
        string animalType;
        string breed;
        int age;
        Gender gender;
		string color;
		Size size;
};

#endif
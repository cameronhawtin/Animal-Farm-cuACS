#ifndef ANIMAL_H
#define ANIMAL_H

#include "cuacsActor.h"
#include "LinkedList.h"

class Animal : public cuacsActor
{
    public:
        Animal(string animalType, string breed, int age, char gender);
        string getAnimalType();
        string getBreed();
        int getAge();
        char getGender();
	//LinkedList<string> getState();

    private:
        string animalType;
        string breed;
        int age;
        char gender;
};

#endif
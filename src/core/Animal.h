#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
    public:
        Animal(string animalType, string breed, int age, char gender);
        string getAnimalType();
        string getBreed();
        int getAge();
        char getGender();

    private:
        string animalType;
        string breed;
        int age;
        char gender;
};

#endif

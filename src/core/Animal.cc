#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Animal.h"

//initializes the data members
Animal::Animal(string animalType, string breed, int age, char gender)
{
    this->animalType = animalType;
    this->breed = breed;
    this->age = age;
    this->gender = gender;
}

//getters for private data memebers
string Animal::getAnimalType() { return animalType; }

string Animal::getBreed() { return breed; }

int Animal::getAge() { return age; }

char Animal::getGender() { return gender; }

LinkedList<string> Animal::getState()
{
  return new LinkedList<string>();
}

int main() 
{
    cout << "Animal class." << endl; 
    return 0; 
}
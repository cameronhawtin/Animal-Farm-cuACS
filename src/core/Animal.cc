#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Animal.h"

//initializes the data members
Animal::Animal(int id, string name, string animalType, string breed, int age, char gender)
{
	this->id = id;
	this->name = name;
    this->animalType = animalType;
    this->breed = breed;
    this->age = age;
    this->gender = gender;
}

//getters for private data memebers
int Animal::getId() { return id; }

String Animal::getName() { return name; }

string Animal::getAnimalType() { return animalType; }

string Animal::getBreed() { return breed; }

int Animal::getAge() { return age; }

char Animal::getGender() { return gender; }

vector<string> Animal::getState()
{
	return new vector<string>();
}

int main() 
{
    cout << "Animal class." << endl; 
    return 0; 
}
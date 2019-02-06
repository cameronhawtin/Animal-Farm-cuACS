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

Animal::Animal(vector<string> state)
{
	this->id = state.at(0);
	this->name = state.at(1);
	this->animalType= state.at(2);
	this->bread = state.at(3);
	this->age = state.at(4);
	this->gender = state.at(5);
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
	vector<string> state = new vector<string>();
	state.push_back(to_string(id), name, animalType, breed, to_string(age), gender);
	return state;
}

int main() 
{
    cout << "Animal class." << endl; 
    return 0; 
}
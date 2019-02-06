#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Animal.h"

//initializes the data members
Animal::Animal(int id, string name, string animalType, string breed, int age, Gender gender, string color, Size size)
{
	this->id = id;
	this->name = name;
    this->animalType = animalType;
    this->breed = breed;
    this->age = age;
    this->gender = gender;
	this->color = color;
	this->size = size;
}

Animal::Animal(vector<string> state)
{
	this->id = state.at(0);
	this->name = state.at(1);
	this->animalType= state.at(2);
	this->bread = state.at(3);
	this->age = state.at(4);
	this->gender = state.at(5);
	this->color = state.at(6);
	this->size = state.at(7);
}

//getters for private data memebers
int Animal::getId() { return id; }

String Animal::getName() { return name; }

string Animal::getAnimalType() { return animalType; }

string Animal::getBreed() { return breed; }

int Animal::getAge() { return age; }

Gender Animal::getGender() { return gender; }

string Animal::getColor() { return color; }

Size Animal::getSize() { return size; }

vector<string> Animal::getState()
{
	vector<string> state = new vector<string>();
	state.push_back(to_string(id), name, animalType, breed, to_string(age), to_string(gender), color, to_string(size));
	return state;
}

int main() 
{
    cout << "Animal class." << endl; 
    return 0; 
}
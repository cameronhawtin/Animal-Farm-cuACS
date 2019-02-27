#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Animal.h"

//initializes the data members
Animal::Animal(int id, string name, string animalType, string breed, int age, string gender, string color, string size)
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

//constructor to set state
Animal::Animal(vector<string> state)
{
	this->id = stoi(state.at(0));
	this->name = state.at(1);
	this->animalType= state.at(2);
	this->breed = state.at(3);
	this->age = std::stoi(state.at(4));
	this->gender = state.at(5);
	this->color = state.at(6);
	this->size = state.at(7);
}

//getters for private data memebers
int Animal::getId() { return id; }

string Animal::getName() { return name; }

string Animal::getAnimalType() { return animalType; }

string Animal::getBreed() { return breed; }

int Animal::getAge() { return age; }

string Animal::getGender() { return gender; }

string Animal::getColor() { return color; }

string Animal::getSize() { return size; }

//returns the state of the Animal in a vector of string
vector<string>* Animal::getState()
{
	vector<string>* state = new vector<string>();
	state->push_back(to_string(id));
	state->push_back(name);
	state->push_back(animalType);
	state->push_back(breed);
	state->push_back(to_string(age));
	state->push_back(gender);
	state->push_back(color);
	state->push_back(size);
	return state;
}

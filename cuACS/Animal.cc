#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

#include "Animal.h"

//initializes the data members
Animal::Animal(int id, string name, string animalType, string breed, int age, string gender, string color, string size,
               int aggression, int attachment, int obedience, string energy, bool isCrateTrained, bool isHypoallergenic,
               bool isNeutered, int childrenComfort, int loudness, float cost, float costPerYear, int intelligence, int cleanliness)
{
	this->id = id;
	this->name = name;
	this->animalType = animalType;
	this->breed = breed;
	this->age = age;
	this->gender = gender;
	this->color = color;
	this->size = size;

    this->aggression = aggression;
    this->attachment = attachment;
    this->obedience = obedience;
    this->energy = energy;
    this->isCrateTrained = isCrateTrained;
    this->isHypoallergenic = isHypoallergenic;
    this->isNeutered = isNeutered;
    this->childrenComfort = childrenComfort;
    this->loudness = loudness;
    this->cost = cost;
    this->costPerYear = costPerYear;
    this->intelligence = intelligence;
    this->cleanliness = cleanliness;
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

    this->aggression = std::stoi(state.at(8));
    this->attachment = std::stoi(state.at(9));
    this->obedience = std::stoi(state.at(10));

    this->energy = state.at(11);
    std::istringstream(state.at(12)) >> this->isCrateTrained;
    std::istringstream(state.at(13)) >> this->isHypoallergenic;
    std::istringstream(state.at(14)) >> this->isNeutered;

    this->childrenComfort = std::stoi(state.at(15));
    this->loudness = std::stoi(state.at(16));
    this->cost = std::stof(state.at(17));
    this->costPerYear = std::stof(state.at(18));
    this->intelligence = std::stoi(state.at(19));
    this->cleanliness = std::stoi(state.at(20));
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

int Animal::getAggression() { return aggression; }
int Animal::getAttachment() { return attachment; }
int Animal::getObedience() { return obedience; }
string Animal::getEnergy() { return energy; }
bool Animal::getIsCrateTrained() { return isCrateTrained; }
bool Animal::getIsHypoallergenic() { return isHypoallergenic; }
bool Animal::getIsNeutered() { return isNeutered; }
int Animal::getChildrenComfort() { return childrenComfort; }
int Animal::getLoudness() { return loudness; }
float Animal::getCost() { return cost; }
float Animal::getCostPerYear() { return costPerYear; }
int Animal::getIntelligence() { return intelligence; }
int Animal::getCleanliness() { return cleanliness; }

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

    state->push_back(to_string(aggression));
    state->push_back(to_string(attachment));
    state->push_back(to_string(obedience));
    state->push_back(energy);
    state->push_back(to_string(isCrateTrained));
    state->push_back(to_string(isHypoallergenic));
    state->push_back(to_string(isNeutered));
    state->push_back(to_string(childrenComfort));
    state->push_back(to_string(loudness));
    state->push_back(to_string(cost));
    state->push_back(to_string(costPerYear));
    state->push_back(to_string(intelligence));
    state->push_back(to_string(cleanliness));

	return state;
}

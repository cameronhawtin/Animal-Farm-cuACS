#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Human.h"

//initializes the data members
Human::Human(int id, string name, int age)
{
        this->id = id;
        this->name = name;
        this->age = age;
}

//constructor to set state
Human::Human(vector<string> state)
{
        this->id = std::stoi(state.at(0));
        this->name = state.at(1);
        this->age = std::stoi(state.at(2));
}

//getters for private data members
int Human::getId() { return id; }

string Human::getName() { return name; }

int Human::getAge() { return age; }

//returns the state of the Human in a vector of string
vector<string>* Human::getState()
{
        vector<string>* state = new vector<string>();
        state->push_back(to_string(id));
        state->push_back(name);
        state->push_back(to_string(age));

        return state;
}

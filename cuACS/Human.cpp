#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Human.h"

//initializes the data members
Human::Human(string name, int age)
{
        this->name = name;
        this->age = age;
}

//constructor to set state
Human::Human(vector<string> state)
{
        this->name = state.at(0);
        this->age = std::stoi(state.at(1));
}

//getters for private data members
string Human::getName() { return name; }

int Human::getAge() { return age; }

//returns the state of the Human in a vector of string
vector<string>* Human::getState()
{
        vector<string>* state = new vector<string>();
        state->push_back(name);
        state->push_back(to_string(age));

        return state;
}

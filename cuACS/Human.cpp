#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Human.h"

//initializes the data members
Human::Human(int id, string name, int age, string gender, string typePreference, string purpose, int attachment, int patience, string homeType,
             string travel, string allergies, int noiseTolerance, bool needFertile, int numChildren,
             string salary, float budget, string freeTime, string email, string address, string phone)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->typePreference = typePreference;
    this->purpose = purpose;
    this->attachment = attachment;
    this->patience = patience;
    this->homeType = homeType;
    this->travel = travel;
    this->allergies = allergies;
    this->noiseTolerance = noiseTolerance;
    this->needFertile = needFertile;
    this->numChildren = numChildren;
    this->salary = salary;
    this->budget = budget;
    this->freeTime = freeTime;
    this->email = email;
    this->address = address;
    this->phone = phone;
}

//constructor to set state
Human::Human(vector<string> state)
{
    this->id = std::stoi(state.at(0));
    this->name = state.at(1);
    this->age = std::stoi(state.at(2));
    this->gender = state.at(3);
    this->typePreference = state.at(4);
    this->purpose = state.at(5);
    this->attachment = std::stoi(state.at(6));
    this->patience = std::stoi(state.at(7));
    this->homeType = state.at(8);
    this->travel = state.at(9);
    this->allergies = state.at(10);
    this->noiseTolerance = std::stoi(state.at(11));
    std::istringstream(state.at(12)) >> this->needFertile;
    this->numChildren = std::stoi(state.at(13));
    this->salary = state.at(14);
    this->budget = std::stof(state.at(15));
    this->freeTime = state.at(16);
    this->email = state.at(17);
    this->phone = state.at(18);
    this->address = state.at(19);
}

//getters for private data members
int Human::getId() { return id; }
string Human::getName() { return name; }
int Human::getAge() { return age; }
string Human::getGender() { return gender; }
string Human::getTypePreference() {return typePreference; }
string Human::getPurpose() { return purpose; }
int Human::getAttachment()  { return attachment; }
int Human::getPatience() { return patience; }
string Human::getHomeType() { return homeType; }
string Human::getTravel() { return travel; }
string Human::getAllergies() { return allergies; }
int Human::getNoiseTolerance() { return noiseTolerance; }
bool Human::getNeedFertile() { return needFertile; }
int Human::getNumChildren() { return numChildren; }
string Human::getSalary() { return salary; }
float Human::getBudget() { return budget; }
string Human::getFreeTime() { return freeTime; }
string Human::getEmail() { return email; }
string Human::getAddress() { return address; }
string Human::getPhoneNumber() { return phone; }


//returns the state of the Human in a vector of string
vector<string>* Human::getState()
{
        vector<string>* state = new vector<string>();
        state->push_back(to_string(id));
        state->push_back(name);
        state->push_back(to_string(age));
        state->push_back(gender);
        state->push_back(typePreference);
        state->push_back(purpose);
        state->push_back(to_string(attachment));
        state->push_back(to_string(patience));
        state->push_back(homeType);
        state->push_back(travel);
        state->push_back(allergies);
        state->push_back(to_string(noiseTolerance));
        state->push_back(to_string(needFertile));
        state->push_back(to_string(numChildren));
        state->push_back(salary);
        state->push_back(to_string(budget));
        state->push_back(freeTime);
        state->push_back(email);
        state->push_back(address);
        state->push_back(phone);

        return state;
}


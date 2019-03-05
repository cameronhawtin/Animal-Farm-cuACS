#ifndef HUMAN_H
#define _H

#include "Profile.h"

class Human: public Profile
{
    public:
        Human(int id, string name, int age, string gender, string purpose, int attachment, int patience, string homeType,
              string travel, string allergies, int noiseTolerance, bool needFertile, int numChildren,
              string salary, float budget, string freeTime, string email, string address, string phone);
        Human(vector<string> statendife);
        int getId();
        string getName();
        int getAge();
        string getGender();
        string getPurpose();
        int getAttachment();
        int getPatience();
        string getHomeType();
        string getTravel();
        string getAllergies();
        int getNoiseTolerance();
        bool getNeedFertile();
        int getNumChildren();
        string getSalary();
        float getBudget();
        string getFreeTime();
        string getEmail();
        string getAddress();
        string getPhoneNumber();

        vector<string>* getState();

private:
        int id;
        string name;
        int age;
        string gender;
        string purpose;
        int attachment;
        int patience;
        string homeType;
        string travel;
        string allergies;
        int noiseTolerance;
        bool needFertile;
        int numChildren;
        string salary;
        float budget;
        string freeTime;
        string email;
        string address;
        string phone;
};

#endif

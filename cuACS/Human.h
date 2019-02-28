#ifndef HUMAN_H
#define _H

#include "Profile.h"

class Human: public Profile
{
    public:
        Human(int id, string name, int age);
        Human(vector<string> statendife);
        int getId();
        string getName();
        int getAge();

        vector<string>* getState();

    private:
        int id;
        string name;
        int age;
};

#endif

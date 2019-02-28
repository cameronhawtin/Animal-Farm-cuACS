#ifndef HUMAN_H
#define _H

#include "Profile.h"

class Human: public Profile
{
    public:
        Human(string name, int age);
        Human(vector<string> statendife);
        string getName();
        int getAge();

        vector<string>* getState();

    private:
        string name;
        int age;
};

#endif

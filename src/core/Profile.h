#ifndef PROFILE_H
#define PROFILE_H

#include <string>

using namespace std;
#include <vector>

class Profile
{
    public:
        virtual vector<string>* getState() = 0;
};

#endif

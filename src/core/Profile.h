#ifndef PROFILE_H
#define PROFILE_H

#include <string>
#include <vector>

using namespace std;

class Profile
{
    public:
        virtual vector<string>* getState() = 0;
};

#endif

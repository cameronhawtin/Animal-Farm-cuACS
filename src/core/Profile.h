#ifndef CUACSACTOR_H
#define CUACSACTOR_H

using namespace std;
#include <vector>

class cuacsActor
{
    public:
        virtual vector<string> getState() = 0;
};

#endif
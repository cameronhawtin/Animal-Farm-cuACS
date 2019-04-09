#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include "CuacsAPI.h"
#include <tuple>

using namespace std;

class Utils
{
    public:
        static void makeMatrix(vector<tuple<Human*, Animal*, float>>, vector<Human*>*, vector<Animal*>*, vector<vector<float>>*);

    private:
        static int indexOfAnimal(vector<Animal*>, Animal*);
        static int indexOfHuman(vector<Human*>, Human*);
};

#endif // UTILS_H

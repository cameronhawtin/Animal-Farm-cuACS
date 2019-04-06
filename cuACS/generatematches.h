#ifndef GENERATEMATCHES_H
#define GENERATEMATCHES_H

#include "CuacsAPI.h"
#include <tuple>

class GenerateMatches
{
public:
    GenerateMatches();
    vector<tuple<Human*, Animal*>> getMatches();
    float getScore(Human*, Animal*);

private:
    CuacsAPI * capi;
    vector<tuple<Human*, Animal*>> matches;
    tuple<Human*, Animal*> match;

    int HypoallergenicAllergies = 150;
    int GoodwithchildrenNumchildren = 140;
};

#endif // GENERATEMATCHES_H

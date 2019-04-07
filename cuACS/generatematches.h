#ifndef GENERATEMATCHES_H
#define GENERATEMATCHES_H

#include <QDialog>
#include <iostream>
#include "CuacsAPI.h"
#include <tuple>
#include <math.h>

class GenerateMatches
{
public:
    GenerateMatches();
    vector<tuple<Human*, Animal*>> getMatches();
    tuple <Human*, Animal*, float> getScore(Human*, Animal*);

    vector<tuple<Human *, Animal *, float> > getAllScores();
private:
    vector<tuple<Human*, Animal*, float>> scores;
    tuple<Human*, Animal*, float> score;
    CuacsAPI *capi;
    QList<Human*> humanList;
    QList<Animal*> animalList;
};

#endif // GENERATEMATCHES_H

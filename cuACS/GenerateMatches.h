#ifndef GENERATEMATCHES_H
#define GENERATEMATCHES_H

#include <string.h>
#include <QDialog>
#include <iostream>
#include "CuacsAPI.h"
#include <tuple>
#include <math.h>

class GenerateMatches
{
public:
    GenerateMatches();
    vector<tuple<Human*, Animal*>> getMatches(vector<tuple <Human*, Animal*, float>>);
    tuple <Human*, Animal*, float> getScore(Human*, Animal*, string&);
    vector<tuple<Human *, Animal *, float> > getAllScores();
    vector<vector<float>> preProcess(vector <vector <float>>);
private:
    tuple<Human*, Animal*, float> score;
    vector<tuple<Human*, Animal*, float>> scores;
    tuple<Human*, Animal*> match;
    vector<tuple<Human*, Animal*>> matches;

    CuacsAPI *capi;
    QList<Human*> humanList;
    QList<Animal*> animalList;

    vector<vector<tuple <Human*, Animal*, float>>> generateSubGroups(vector<tuple <Human*, Animal*, float>>);
};

#endif // GENERATEMATCHES_H

#include "generatematches.h"

GenerateMatches::GenerateMatches()
{
    capi = new CuacsAPI();
    vector<Human*> humansVec = capi->getHumans();
    vector<Animal*> animalsVec = capi->getAnimals();
}

vector <tuple <Human*, Animal*>> GenerateMatches::getMatches()
{

    //match = make_tuple('a', 10, 15.5);
}

float GenerateMatches::getScore(Human* human, Animal* animal) {
    int aggressionMatch;
    int attachmentMatch;
    int obedienceMatch;
    int energyMatch;
    int crateMatch;
    int allergenMatch;



    int childrenMatch = human->getNumChildren() * animal->getChildrenComfort();
}

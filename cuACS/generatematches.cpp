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
    int e=-1;

    int AllergiesAllergies;
    if ((human->getAllergies().find("Cat")!=std::string::npos && animal->getAnimalType() == "Cat" && animal->getIsHypoallergenic() == false)        ||
        (human->getAllergies().find("Dog")!=std::string::npos && animal->getAnimalType() == "Dog" && animal->getIsHypoallergenic() == false)        ||
        (human->getAllergies().find("Bird")!=std::string::npos && animal->getAnimalType() == "Bird" && animal->getIsHypoallergenic() == false)      ||
        (human->getAllergies().find("Hamster")!=std::string::npos && animal->getAnimalType() == "Hamster" && animal->getIsHypoallergenic() == false)||
        (human->getAllergies().find("Mouse")!=std::string::npos && animal->getAnimalType() == "Mouse" && animal->getIsHypoallergenic() == false)    ||
        (human->getAllergies().find("Guineapig")!=std::string::npos && animal->getAnimalType() == "Guinea Pig" && animal->getIsHypoallergenic() == false) )
            AllergiesAllergies = 0;
    else AllergiesAllergies = 100;

    int childrenMatch = human->getNumChildren() * animal->getChildrenComfort() * 2;

    int NeuteredNeutered;
    if (human->getNeedFertile() && animal->getIsNeutered())
        NeuteredNeutered = 100;

    else if (!human->getNeedFertile())
        NeuteredNeutered = 50;
    else
        NeuteredNeutered = 0;

    int AggressionPurpose;
    try {
        if (human->getPurpose() == "Guard" || human->getPurpose() == "Hunting")
            AggressionPurpose = animal->getAggression()*10;

        else if (human->getPurpose() == "Companion" || human->getPurpose() == "Gift")
            AggressionPurpose = animal->getAggression()*5;

        else if (human->getPurpose() == "Breeding" || human->getPurpose() == "Disability")
            AggressionPurpose = animal->getAggression()*1;
        else throw e;
    }
    catch (int e) {
        std::cout << "AggressionPurpose error";
    }

    int AttachmentAttachment = human->getAttachment() * animal->getAttachment();

    int CrateTravel;
    // this can be improved if someone has the time
    if (human->getTravel() == "No Travel" || animal->getIsCrateTrained())
        CrateTravel = 100;
    else if (human->getTravel() != "No Travel" && !animal->getIsCrateTrained())
        CrateTravel = 0;
    else {
        CrateTravel = 100;
    }

    int IntelligencePurpose;
    try {
        if (human->getPurpose() == "Disability" || human->getPurpose() == "Hunting")
            AggressionPurpose = animal->getIntelligence()*10;

        else if (human->getPurpose() == "Companion" || human->getPurpose() == "Guard")
            AggressionPurpose = animal->getIntelligence()*5;

        else if (human->getPurpose() == "Breeding" || human->getPurpose() == "Gift")
            AggressionPurpose = animal->getIntelligence()*1;
        else throw e;
    }
    catch (int e) {
        std::cout << "IntelligencePurpose error";
    }

    int AttachmentFreetime;
    if (human->getFreeTime() == "0 - 1")
        animal->getAttachment() * 0;
    else if (human->getFreeTime() == "1 - 2")
        animal->getAttachment() * 3;
    else if (human->getFreeTime() == "3 - 4")
        animal->getAttachment() * 6;
    else if (human->getFreeTime() == "5+")
        animal->getAttachment() * 10;

    int ObidiencePatience = human->getPatience() * animal->getObedience();

    int LoudnessHometype;
    if (human->getHomeType() == "Apartment")
        animal->getLoudness() * 1;
    else if (human->getHomeType() == "Condo")
        animal->getLoudness() * 3;
    else if (human->getHomeType() == "Small House")
        animal->getLoudness() * 5;
    else if (human->getHomeType() == "Medium House")
        animal->getLoudness() * 7;
    else
        animal->getLoudness() * 10;






    int obedienceMatch;
    int energyMatch;
    int crateMatch;
    int allergenMatch;




}

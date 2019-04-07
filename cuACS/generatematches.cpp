#include "generatematches.h"

GenerateMatches::GenerateMatches()
{
    capi = new CuacsAPI();

    vector<Human*> humansVec = capi->getHumans();

    if (humansVec.size() != 0) {
        //Make QList from vector
        animalList.reserve(humansVec.size());
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(humanList));
    }

    vector<Animal*> animalsVec = capi->getAnimals();

    if (animalsVec.size() != 0) {
        //Make QList from vector
        animalList.reserve(animalsVec.size());
        std::copy(animalsVec.begin(), animalsVec.end(), std::back_inserter(animalList));
    }
}

vector <tuple <Human*, Animal*>> GenerateMatches::getMatches()
{

    //match = make_tuple('a', 10, 15.5);
}

vector <tuple <Human*, Animal*, float>> GenerateMatches::getAllScores() {
    for (int i = 0; i < humanList.size(); i++) {
        for (int j = 0; j < animalList.size(); j++) {
            score = getScore(humanList.at(i), animalList.at(j));
            scores.push_back(score);
        }
    }
    return scores;
}

tuple <Human*, Animal*, float> GenerateMatches::getScore(Human* human, Animal* animal) {
    int totalScore;
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

    int ChildrenChildren = human->getNumChildren() * animal->getChildrenComfort() * 2;

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
        AttachmentFreetime = animal->getAttachment() * 0;
    else if (human->getFreeTime() == "1 - 2")
        AttachmentFreetime = animal->getAttachment() * 3;
    else if (human->getFreeTime() == "3 - 4")
        AttachmentFreetime = animal->getAttachment() * 6;
    else if (human->getFreeTime() == "5+")
        AttachmentFreetime = animal->getAttachment() * 10;

    int ObediencePatience = human->getPatience() * animal->getObedience();

    int LoudnessHometype;
    if (human->getHomeType() == "Apartment")
        LoudnessHometype = animal->getLoudness() * 1;
    else if (human->getHomeType() == "Condo")
        LoudnessHometype = animal->getLoudness() * 3;
    else if (human->getHomeType() == "Small House")
        LoudnessHometype = animal->getLoudness() * 5;
    else if (human->getHomeType() == "Medium House")
        LoudnessHometype = animal->getLoudness() * 7;
    else
        LoudnessHometype = animal->getLoudness() * 10;

    int CostBudget;
    if (human->getBudget() <= animal->getCost())
        CostBudget = 100;
    else
        CostBudget = 0;

    int EnergyHometype;
    if (human->getHomeType() == "Apartment" && animal->getEnergy() == "High")
        EnergyHometype = 10;
    else if ((human->getHomeType() == "Condo" && animal->getEnergy() == "High") ||
             (human->getHomeType() == "Apartment" && animal->getEnergy() == "Medium"))
        EnergyHometype = 30;
    else if ((human->getHomeType() == "Small House" && animal->getEnergy() == "High") ||
             (human->getHomeType() == "Condo" && animal->getEnergy() == "Medium"))
        EnergyHometype = 50;
    else if (human->getHomeType() == "Medium House" && animal->getEnergy() == "High")
        EnergyHometype = 70;
    else
        EnergyHometype = 100;

    int CleanlinessFreetime;
    if (human->getFreeTime() == "0 - 1")
        CleanlinessFreetime = 1 * animal->getCleanliness();
    else if (human->getFreeTime() == "1 - 2")
        CleanlinessFreetime = 3 * animal->getCleanliness();
    else if (human->getFreeTime() == "2 - 3")
        CleanlinessFreetime = 5 * animal->getCleanliness();
    else if (human->getFreeTime() == "3 - 4")
        CleanlinessFreetime = 7 * animal->getCleanliness();
    else if (human->getFreeTime() == "5+")
        CleanlinessFreetime = 10 * animal->getCleanliness();
    else printf("oops");

    int CratetrainedPatience;
    if (animal->getIsCrateTrained()) {
        if (human->getPatience() > 5)
            CratetrainedPatience = 2 * human->getPatience();
        else
            CratetrainedPatience = 5 * human->getPatience();
    }
    else if (!animal->getIsCrateTrained()) {
        if (human->getPatience() > 5)
            CratetrainedPatience = 10 * human->getPatience();
        else
            CratetrainedPatience = 1 * human->getPatience();
    }
    else printf("oops");

    int NeuteredBudget;
    if (animal->getIsNeutered())
        NeuteredBudget = 50;
    else if (!animal->getIsNeutered()) {
        if (human->getBudget() - animal->getCost() > 250)
            NeuteredBudget = 100;
        else
            NeuteredBudget = 0;
    }
    else printf("oops");

    // this can be improved
    int MaintenanceSalary;
    if ((human->getSalary() == "0 - 30" && animal->getCostPerYear() < 30)       ||
        (human->getSalary() == "30 - 50" && animal->getCostPerYear() < 75)      ||
        (human->getSalary() == "50 - 70" && animal->getCostPerYear() < 200)     ||
        (human->getSalary() == "70 - 90" && animal->getCostPerYear() < 400)     ||
        (human->getSalary() == "90 - 110" && animal->getCostPerYear() < 600)    ||
        (human->getSalary() == "110 - 130" && animal->getCostPerYear() < 1000)  ||
        (human->getSalary() == "130+"))
        MaintenanceSalary = 100;
    else
        MaintenanceSalary = 0;


    int CleanlinessPatience = human->getPatience() * animal->getCleanliness();

    int AggressionPatience = human->getPatience() * animal->getAggression();

    int CleanlinessSalary;
    if (human->getSalary() == "0 - 30")
        CleanlinessSalary = 1 * animal->getCleanliness();
    else if (human->getSalary() == "30 - 50")
        CleanlinessSalary = 3 * animal->getCleanliness();
    else if (human->getSalary() == "50 - 70")
        CleanlinessSalary = 5 * animal->getCleanliness();
    else if (human->getSalary() == "70 - 90")
        CleanlinessSalary = 7 * animal->getCleanliness();
    else if (human->getSalary() == "90 - 110")
        CleanlinessSalary = 8 * animal->getCleanliness();
    else if (human->getSalary() == "110 - 130")
        CleanlinessSalary = 9 * animal->getCleanliness();
    else if (human->getSalary() == "130+")
        CleanlinessSalary = 10 * animal->getCleanliness();
    else printf("oops");


    int ChildrenPatience = human->getPatience() * animal->getChildrenComfort();



    totalScore = AllergiesAllergies*150 +
    ChildrenChildren*140 +
    NeuteredNeutered*130 +
    AggressionPurpose*125 +
    AttachmentAttachment*120 +
    CrateTravel*118 +
    IntelligencePurpose*110 +
    AttachmentFreetime*70 +
    ObediencePatience*63 +
    LoudnessHometype*58 +
    CostBudget*57 +
    EnergyHometype*55 +
    CleanlinessFreetime*53 +
    CratetrainedPatience*50 +
    NeuteredBudget*48 +
    MaintenanceSalary*45 +
    CleanlinessPatience*43 +
    AggressionPatience*40 +
    CleanlinessSalary*30 +
    ChildrenChildren*20;

    cout << human->getName() << " and " << animal->getName() << " return a score of " << totalScore << " and an adjusted score of " << log(totalScore) << endl;

    return make_tuple(human, animal, log(totalScore));
}

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


vector<vector<tuple <Human*, Animal*, float>>> GenerateMatches::generateSubGroups(vector<tuple <Human*, Animal*, float>> scoredPairs)
{
     map<string, vector <tuple <Human*, Animal*, float>>> map;

     //using indices to iterate over the vector
     for(std::vector<tuple <Human*, Animal*, float>>::size_type i = 0; i != scoredPairs.size(); i++) {
         //std::cout << v[i]; ...

         string humanPref = get<0>(scoredPairs[i])->getTypePreference();
         string animalType = get<1>(scoredPairs[i])->getAnimalType();

         //if the human's preference and the animal's type match
         //also note that strcmp takes a char array
         if(strcmp(humanPref.c_str(), animalType.c_str()) == 0)
         {

             //if the map doesn't contain this animalType
             if(map.find(humanPref) != map.end())
             {
                 vector<tuple <Human*, Animal*, float>> tempVector =  vector<tuple <Human*, Animal*, float>>();
                 tuple<Human*, Animal*, float> tempTuple = make_tuple(get<0>(scoredPairs[i]), get<1>(scoredPairs[i]), get<2>(scoredPairs[i]));
                 tempVector.push_back(tempTuple);
                 map[humanPref] = tempVector;
             }
             else
             {
                 tuple<Human*, Animal*,float> tempTuple = make_tuple(get<0>(scoredPairs[i]), get<1>(scoredPairs[i]), get<2>(scoredPairs[i]));
                 map[humanPref].push_back(tempTuple);
             }
         }
     }

     vector<vector <tuple <Human*, Animal*, float>>> result;
     //looping through the unsorted map to make a vector of subgrups
     for (const auto & [ key, value ] : map) {
         //cout << key << ": " << value << endl;
         result.push_back(value);
     }
     return result;
}

vector <tuple <Human*, Animal*>> GenerateMatches::getMatches(vector<tuple <Human*, Animal*, float>> scoredPairs)
{

    vector<vector<tuple<Human*, Animal*, float>>> subGroups = this->generateSubGroups(scoredPairs);

    //iterating over the subgroups using their indices
    for(std::vector<tuple <Human*, Animal*, float>>::size_type i = 0; i != subGroups.size(); i++) {
        float maxScore = 0;
        tuple<Human*, Animal*> maxTuple;
        //for each subgroup, pick the best scored pair
        for(std::vector<tuple <Human*, Animal*, float>>::size_type j = 0; j != subGroups[i].size(); j++) {
            tuple<Human*, Animal*, float> tempTuple = subGroups[i][j];
            //if the current pair's score is greater than the maxScore for the current subgroup
            if(get<2>(tempTuple) > maxScore){
                maxScore = get<2>(tempTuple);
                maxTuple = make_tuple(get<0>(tempTuple),get<1>(tempTuple));
            }
        }
        matches.push_back(maxTuple);
    }

    /*
    // temp code -- added by Cam/Simone and commented for now
    match = make_tuple(humanList.at(0), animalList.at(0));
    matches.push_back(match);
    match = make_tuple(humanList.at(1), animalList.at(1));
    matches.push_back(match);
    match = make_tuple(humanList.at(2), animalList.at(2));
    matches.push_back(match);
    */

    return matches;
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

    int typeType;
    if (human->getTypePreference() == animal->getAnimalType())
        typeType = 100;
    else
        typeType = 0;

    int allergiesAllergies;
    if ((human->getAllergies().find("Cat")!=std::string::npos && animal->getAnimalType() == "Cat" && animal->getIsHypoallergenic() == false)        ||
        (human->getAllergies().find("Dog")!=std::string::npos && animal->getAnimalType() == "Dog" && animal->getIsHypoallergenic() == false)        ||
        (human->getAllergies().find("Bird")!=std::string::npos && animal->getAnimalType() == "Bird" && animal->getIsHypoallergenic() == false)      ||
        (human->getAllergies().find("Hamster")!=std::string::npos && animal->getAnimalType() == "Hamster" && animal->getIsHypoallergenic() == false)||
        (human->getAllergies().find("Mouse")!=std::string::npos && animal->getAnimalType() == "Mouse" && animal->getIsHypoallergenic() == false)    ||
        (human->getAllergies().find("Guineapig")!=std::string::npos && animal->getAnimalType() == "Guinea Pig" && animal->getIsHypoallergenic() == false) )
            allergiesAllergies = 0;
    else allergiesAllergies = 100;

    int childrenChildren = human->getNumChildren() * animal->getChildrenComfort() * 2;

    int neuteredNeutered;
    if (human->getNeedFertile() && animal->getIsNeutered())
        neuteredNeutered = 100;

    else if (!human->getNeedFertile())
        neuteredNeutered = 50;
    else
        neuteredNeutered = 0;

    int aggressionPurpose = 0;
    try {
        if (human->getPurpose() == "Guard" || human->getPurpose() == "Hunting")
            aggressionPurpose = animal->getAggression()*10;

        else if (human->getPurpose() == "Companion" || human->getPurpose() == "Gift")
            aggressionPurpose = animal->getAggression()*5;

        else if (human->getPurpose() == "Breeding" || human->getPurpose() == "Disability")
            aggressionPurpose = animal->getAggression()*1;
        else throw e;
    }
    catch (int e) {
        std::cout << "AggressionPurpose error";
    }

    int attachmentAttachment = human->getAttachment() * animal->getAttachment();

    int crateTravel;
    // this can be improved
    if (human->getTravel() == "No Travel" || animal->getIsCrateTrained())
        crateTravel = 100;
    else if (human->getTravel() != "No Travel" && !animal->getIsCrateTrained())
        crateTravel = 0;
    else {
        crateTravel = 100;
    }

    int intelligencePurpose = 0;
    try {
        if (human->getPurpose() == "Disability" || human->getPurpose() == "Hunting")
            intelligencePurpose = animal->getIntelligence()*10;

        else if (human->getPurpose() == "Companion" || human->getPurpose() == "Guard")
            intelligencePurpose = animal->getIntelligence()*5;

        else if (human->getPurpose() == "Breeding" || human->getPurpose() == "Gift")
            intelligencePurpose = animal->getIntelligence()*1;
        else throw e;
    }
    catch (int e) {
        std::cout << "IntelligencePurpose error";
    }

    int attachmentFreetime;
    if (human->getFreeTime() == "0 - 1")
        attachmentFreetime = animal->getAttachment() * 0;
    else if (human->getFreeTime() == "1 - 2")
        attachmentFreetime = animal->getAttachment() * 3;
    else if (human->getFreeTime() == "3 - 4")
        attachmentFreetime = animal->getAttachment() * 6;
    else attachmentFreetime = animal->getAttachment() * 10;

    int obediencePatience = human->getPatience() * animal->getObedience();

    int loudnessHometype;
    if (human->getHomeType() == "Apartment")
        loudnessHometype = animal->getLoudness() * 1;
    else if (human->getHomeType() == "Condo")
        loudnessHometype = animal->getLoudness() * 3;
    else if (human->getHomeType() == "Small House")
        loudnessHometype = animal->getLoudness() * 5;
    else if (human->getHomeType() == "Medium House")
        loudnessHometype = animal->getLoudness() * 7;
    else
        loudnessHometype = animal->getLoudness() * 10;

    int costBudget;
    if (human->getBudget() <= animal->getCost())
        costBudget = 100;
    else
        costBudget = 0;

    int energyHometype;
    if (human->getHomeType() == "Apartment" && animal->getEnergy() == "High")
        energyHometype = 10;
    else if ((human->getHomeType() == "Condo" && animal->getEnergy() == "High") ||
             (human->getHomeType() == "Apartment" && animal->getEnergy() == "Medium"))
        energyHometype = 30;
    else if ((human->getHomeType() == "Small House" && animal->getEnergy() == "High") ||
             (human->getHomeType() == "Condo" && animal->getEnergy() == "Medium"))
        energyHometype = 50;
    else if (human->getHomeType() == "Medium House" && animal->getEnergy() == "High")
        energyHometype = 70;
    else
        energyHometype = 100;

    int cleanlinessFreetime;
    if (human->getFreeTime() == "0 - 1")
        cleanlinessFreetime = 1 * animal->getCleanliness();
    else if (human->getFreeTime() == "1 - 2")
        cleanlinessFreetime = 3 * animal->getCleanliness();
    else if (human->getFreeTime() == "2 - 3")
        cleanlinessFreetime = 5 * animal->getCleanliness();
    else if (human->getFreeTime() == "3 - 4")
        cleanlinessFreetime = 7 * animal->getCleanliness();
    else cleanlinessFreetime = 10 * animal->getCleanliness();

    int cratetrainedPatience;
    if (animal->getIsCrateTrained()) {
        if (human->getPatience() > 5)
            cratetrainedPatience = 2 * human->getPatience();
        else
            cratetrainedPatience = 5 * human->getPatience();
    }
    else {
        if (human->getPatience() > 5)
            cratetrainedPatience = 10 * human->getPatience();
        else
            cratetrainedPatience = 1 * human->getPatience();
    }

    int neuteredBudget;
    if (animal->getIsNeutered())
        neuteredBudget = 50;
    else {
        if (human->getBudget() - animal->getCost() > 250)
            neuteredBudget = 100;
        else
            neuteredBudget = 0;
    }

    // this can be improved
    int maintenanceSalary;
    if ((human->getSalary() == "0 - 30" && animal->getCostPerYear() < 30)       ||
        (human->getSalary() == "30 - 50" && animal->getCostPerYear() < 75)      ||
        (human->getSalary() == "50 - 70" && animal->getCostPerYear() < 200)     ||
        (human->getSalary() == "70 - 90" && animal->getCostPerYear() < 400)     ||
        (human->getSalary() == "90 - 110" && animal->getCostPerYear() < 600)    ||
        (human->getSalary() == "110 - 130" && animal->getCostPerYear() < 1000)  ||
        (human->getSalary() == "130+"))
        maintenanceSalary = 100;
    else
        maintenanceSalary = 0;


    int cleanlinessPatience = human->getPatience() * animal->getCleanliness();

    int aggressionPatience = human->getPatience() * animal->getAggression();

    int cleanlinessSalary;
    if (human->getSalary() == "0 - 30")
        cleanlinessSalary = 1 * animal->getCleanliness();
    else if (human->getSalary() == "30 - 50")
        cleanlinessSalary = 3 * animal->getCleanliness();
    else if (human->getSalary() == "50 - 70")
        cleanlinessSalary = 5 * animal->getCleanliness();
    else if (human->getSalary() == "70 - 90")
        cleanlinessSalary = 7 * animal->getCleanliness();
    else if (human->getSalary() == "90 - 110")
        cleanlinessSalary = 8 * animal->getCleanliness();
    else if (human->getSalary() == "110 - 130")
        cleanlinessSalary = 9 * animal->getCleanliness();
    else cleanlinessSalary = 10 * animal->getCleanliness();


    int childrenPatience = human->getPatience() * animal->getChildrenComfort();



    totalScore = typeType*225 +
    allergiesAllergies*150 +
    childrenChildren*140 +
    neuteredNeutered*130 +
    aggressionPurpose*125 +
    attachmentAttachment*120 +
    crateTravel*118 +
    intelligencePurpose*110 +
    attachmentFreetime*70 +
    obediencePatience*63 +
    loudnessHometype*58 +
    costBudget*57 +
    energyHometype*55 +
    cleanlinessFreetime*53 +
    cratetrainedPatience*50 +
    neuteredBudget*48 +
    maintenanceSalary*45 +
    cleanlinessPatience*43 +
    aggressionPatience*40 +
    cleanlinessSalary*30 +
    childrenPatience*20;

    cout << human->getName() << " and " << animal->getName() << " return a score of " << totalScore << " and an adjusted score of " << log(totalScore) << endl;

    return make_tuple(human, animal, log(totalScore));
}

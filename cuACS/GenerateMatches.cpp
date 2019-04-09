#include "GenerateMatches.h"

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

vector <vector <float>> GenerateMatches:: preProcess(vector <vector <float>> vscores) {
    float totalSum = 0;
    float devSum = 0;
    float stdDeviation;
    float stdDeviationAboveMean;
    float max = 0;

    float mean;

    for (int i=0; i<vscores.size(); i++) {
        for (int j=0; j<vscores.at(i).size(); j++) {
            totalSum+=vscores.at(i).at(j);
            if (vscores.at(i).at(j) > max) {
                max = vscores.at(i).at(j);
            }
        }
    }

    mean = totalSum/vscores.size();

    for (int i=0; i<vscores.size(); i++) {
        for (int j=0; j<vscores.at(i).size(); j++) {
            devSum+=pow(((vscores.at(i).at(j))-mean), 2);
        }
    }
    stdDeviation = sqrt(devSum/vscores.size());
    stdDeviationAboveMean = mean+stdDeviation;

    for (int i=0; i<vscores.size(); i++) {
        for (int j=0; j<vscores.at(i).size(); j++) {
            if (vscores.at(i).at(j) < stdDeviationAboveMean) {
                vscores.at(i).at(j) = -(max);
            }
        }
    }

    return vscores;
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
    string summary;
    for (int i = 0; i < humanList.size(); i++) {
        for (int j = 0; j < animalList.size(); j++) {
            score = getScore(humanList.at(i), animalList.at(j), summary);
            scores.push_back(score);
        }
    }
    return scores;
}

tuple <Human*, Animal*, float> GenerateMatches::getScore(Human* human, Animal* animal, string& summary) {
    int totalScore;
    int e=-1;

    //Matching client allergies with animals type/if the animal is hypoallergenic
    int allergiesAllergies;
    if ((human->getAllergies().find("Cat")!=std::string::npos && animal->getAnimalType() == "Cat" && animal->getIsHypoallergenic() == false)        ||
        (human->getAllergies().find("Dog")!=std::string::npos && animal->getAnimalType() == "Dog" && animal->getIsHypoallergenic() == false)        ||
        (human->getAllergies().find("Bird")!=std::string::npos && animal->getAnimalType() == "Bird" && animal->getIsHypoallergenic() == false)      ||
        (human->getAllergies().find("Hamster")!=std::string::npos && animal->getAnimalType() == "Hamster" && animal->getIsHypoallergenic() == false)||
        (human->getAllergies().find("Mouse")!=std::string::npos && animal->getAnimalType() == "Mouse" && animal->getIsHypoallergenic() == false)    ||
        (human->getAllergies().find("Guineapig")!=std::string::npos && animal->getAnimalType() == "Guinea Pig" && animal->getIsHypoallergenic() == false) )
            allergiesAllergies = 0;
    else allergiesAllergies = 100;

    //Matching client type preference with the type of the animal
    int typeType;
    if (human->getTypePreference() == animal->getAnimalType())
        typeType = 100;
    else
        typeType = 0;

    //Matching the number of children of the client with the animals comfort with children
    int childrenChildren = human->getNumChildren() * animal->getChildrenComfort() * 2;
    if (childrenChildren > 100) childrenChildren = 100;

    //Matching the clients need for a neutered animal with the animal being neutered or not
    int neuteredNeutered;
    if (human->getNeedNeutered() && animal->getIsNeutered())
        neuteredNeutered = 100;
    else if (!human->getNeedNeutered())
        neuteredNeutered = 50;
    else
        neuteredNeutered = 0;

    //Matching the purpose that the client will be using the animal for with the aggression of the animal
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

    //Matching the attachment of the animal with the attachment of the client
    int attachmentAttachment = human->getAttachment() * animal->getAttachment();

    //Matching the travel time of the client with the crate training of the animal
    int crateTravel;
    if (human->getTravel() == "No Travel" || animal->getIsCrateTrained())
        crateTravel = 100;
    else if (human->getTravel() == "1 - 2 Weeks" && !animal->getIsCrateTrained())
        crateTravel = 40;
    else if (human->getTravel() == "3 - 4 Weeks" && !animal->getIsCrateTrained())
        crateTravel = 20;
    else {
        crateTravel = 0;
    }

    //Matching the intelligence of the animal with the clients purpose for adoption
    int intelligencePurpose = 0;
    try{
        if (human->getPurpose() == "Disability" || human->getPurpose() == "Hunting")
            intelligencePurpose = animal->getIntelligence()*10;

        else if (human->getPurpose() == "Companion" || human->getPurpose() == "Guard")
            intelligencePurpose = 50;

        else if (human->getPurpose() == "Breeding" || human->getPurpose() == "Gift")
            intelligencePurpose = (10 - animal->getIntelligence())*10;
        else throw e;
    }
    catch (int e) {
        std::cout << "IntelligencePurpose error";
    }
    if (intelligencePurpose < 0) intelligencePurpose = 0;
    if (intelligencePurpose > 100) intelligencePurpose = 100;

    //Matching the attachment of the animal with the free time of the client
    int attachmentFreetime;
    if (human->getFreeTime() == "0 - 1")
        attachmentFreetime = (10 - animal->getAttachment()) * 10;
    else if (human->getFreeTime() == "1 - 2")
        attachmentFreetime = (10 - animal->getAttachment()) * 7;
    else if (human->getFreeTime() == "3 - 4")
        attachmentFreetime = animal->getAttachment() * 7;
    else attachmentFreetime = animal->getAttachment() * 10;

    //Matching the obedience of the animal with the patience of the client
    int obediencePatience = (10 - human->getPatience()) * animal->getObedience();

    //Matching the loudness of the animal with the home type of the client
    int loudnessHometype;
    if (human->getHomeType() == "Apartment")
        loudnessHometype = (10 - animal->getLoudness()) * 10;
    else if (human->getHomeType() == "Condo")
        loudnessHometype = (10 - animal->getLoudness()) * 7;
    else if (human->getHomeType() == "Small House")
        loudnessHometype = 50;
    else if (human->getHomeType() == "Medium House")
        loudnessHometype = animal->getLoudness() * 7;
    else
        loudnessHometype = animal->getLoudness() * 10;

    //Matching the cost of the animal with the clients budget
    int costBudget;
    if (human->getBudget() >= animal->getCost())
        costBudget = 100;
    else
        costBudget = 0;

    //Matching the energy of the animal with the home type of the client
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

    //Matching the cleanliness of the animal with the free time of the client
    int cleanlinessFreetime;
    if (human->getFreeTime() == "0 - 1")
        cleanlinessFreetime = 10 * animal->getCleanliness();
    else if (human->getFreeTime() == "1 - 2")
        cleanlinessFreetime = 7 * animal->getCleanliness();
    else if (human->getFreeTime() == "2 - 3")
        cleanlinessFreetime = 50;
    else if (human->getFreeTime() == "3 - 4")
        cleanlinessFreetime = 7 * (10 - animal->getCleanliness());
    else cleanlinessFreetime = 10 * (10 - animal->getCleanliness());

    //Matching the create training of the animal with the patience of the client
    int cratetrainedPatience;
    if (animal->getIsCrateTrained()) {
        if (human->getPatience() > 5)
            cratetrainedPatience = 2 * human->getPatience();
        else
            cratetrainedPatience = 10 * human->getPatience();
    }
    else {
        if (human->getPatience() > 5)
            cratetrainedPatience = 10 * human->getPatience();
        else
            cratetrainedPatience = 1 * human->getPatience();
    }

    //Matching the clients budget with the need for the animal to be neutered
    int neuteredBudget;
    if (animal->getIsNeutered())
        neuteredBudget = 50;
    else {
        if (human->getBudget() - animal->getCost() > 250)
            neuteredBudget = 100;
        else
            neuteredBudget = 0;
    }

    //Matching the maintenence cost of the animal with the salary of the client
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


    //Matching the cleanliness of the animal with the patience of the client
    int cleanlinessPatience = (10 - human->getPatience()) * animal->getCleanliness();

    //Matching the aggression of the animal with the patience of the client
    int aggressionPatience = human->getPatience() * animal->getAggression();

    //Matching the cleanliness of the animal with the salary of the client
    int cleanlinessSalary;
    if (human->getSalary() == "0 - 30")
        cleanlinessSalary = 10 * animal->getCleanliness();
    else if (human->getSalary() == "30 - 50")
        cleanlinessSalary = 7 * animal->getCleanliness();
    else if (human->getSalary() == "50 - 70")
        cleanlinessSalary = 5 * animal->getCleanliness();
    else if (human->getSalary() == "70 - 90")
        cleanlinessSalary = 7 * (10 - animal->getCleanliness());
    else if (human->getSalary() == "90 - 110")
        cleanlinessSalary = 8 * (10 - animal->getCleanliness());
    else if (human->getSalary() == "110 - 130")
        cleanlinessSalary = 9 * (10 - animal->getCleanliness());
    else cleanlinessSalary = 10 * (10 - animal->getCleanliness());


    //Matching the patience of the client with the animals comfort with children
    int childrenPatience = human->getPatience() * (10 - animal->getChildrenComfort());

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

    summary = string("Matching Summary (pair scoring percentages): \n Type Preference: ") + to_string(typeType) +
            "%\n Allergies: " + to_string(allergiesAllergies) +
            "%\n Children: " + to_string(childrenChildren) +
            "%\n Neutered/Spayed: " + to_string(neuteredNeutered) +
            "%\n Aggression/Purpose " + to_string(aggressionPurpose) +
            "%\n Attachment: " + to_string(attachmentAttachment) +
            "%\n Crate Trained/Travel: " + to_string(crateTravel) +
            "%\n Intelligence/Purpose: " + to_string(intelligencePurpose) +
            "%\n Attachment/Free Time: " + to_string(attachmentFreetime) +
            "%\n Obedience/Patience: " + to_string(obediencePatience) +
            "%\n Loudness/Home Type: " + to_string(loudnessHometype) +
            "%\n Cost/Budget: " + to_string(costBudget) +
            "%\n Energy/Home Type: " + to_string(energyHometype) +
            "%\n Cleanliness/Free Time: " + to_string(cleanlinessFreetime) +
            "%\n Crate Trained/Patience: " + to_string(cratetrainedPatience) +
            "%\n Neutered/Budget: " + to_string(neuteredBudget) +
            "%\n Maintenance/Salary: " + to_string(attachmentAttachment) +
            "%\n Cleanliness/Patience: " + to_string(cleanlinessPatience) +
            "%\n Aggression/Patience: " + to_string(aggressionPatience) +
            "%\n Cleanliness/Salary: " + to_string(cleanlinessSalary) +
            "%\n Comfort with Children/Patience: " + to_string(childrenPatience) + "%";

    return make_tuple(human, animal, totalScore);
}

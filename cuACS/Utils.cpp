#include "Utils.h"

void Utils::makeMatrix(vector<tuple<Human*, Animal*, float>> scoredPairs, vector<Human*> humans, vector<Animal*> animals, vector<vector<float>> result)
{
    //iterate over the vector to get each tuple
    for(std::vector<tuple <Human*, Animal*, float>>::size_type j = 0; j != scoredPairs.size(); j++) {

        //extract the Human and Client fromt the tuple
        Human* currentHuman = get<0>(scoredPairs[j]);
        Animal* currentAnimal = get<1>(scoredPairs[j]);

        int humanIndex = indexOfHuman(humans, currentHuman);
        int animalIndex = indexOfAnimal(animals, currentAnimal);

        //if the current human doesn't exist in the list of humans
        if(humanIndex == -1)
        {
            humans.push_back(currentHuman);
            humanIndex = humans.size()-1;
        }
        //if the current animal doesn't exist in the list of animals
        if(animalIndex == -1)
        {
            animals.push_back(currentAnimal);
            animalIndex = animals.size()-1;
        }

        result.at(animalIndex).at(humanIndex) = get<2>(scoredPairs[j]);
    }

}

int Utils::indexOfAnimal(vector<Animal*> animalList, Animal* findAnimal)
{
    for(std::vector<tuple <Human*, Animal*, float>>::size_type j = 0; j != animalList.size(); j++) {
        if(animalList[j] == findAnimal)
            return j;
    }
        return -1;
}

int Utils::indexOfHuman(vector<Human*> humanList, Human* findHuman)
{
    for(std::vector<tuple <Human*, Animal*, float>>::size_type j = 0; j != humanList.size(); j++) {
        if(humanList[j] == findHuman)
            return j;
    }
        return -1;
}

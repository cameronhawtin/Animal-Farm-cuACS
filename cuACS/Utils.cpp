#include "Utils.h"

void Utils::makeMatrix(vector<tuple<Human*, Animal*, float>> scoredPairs, vector<Human*>* humans, vector<Animal*>* animals, vector<vector<float>>* result)
{
       //iterate over the vector to get each tuple
       for(std::vector<tuple <Human*, Animal*, float>>::size_type j = 0; j != scoredPairs.size(); j++) {

           //extract the Human and Client fromt the tuple
           Human* currentHuman = get<0>(scoredPairs[j]);
           Animal* currentAnimal = get<1>(scoredPairs[j]);

           int humanIndex = indexOfHuman(*humans, currentHuman);
           int animalIndex = indexOfAnimal(*animals, currentAnimal);

           //if the current human doesn't exist in the list of humans
           if(humanIndex == -1)
           {
               humans->push_back(currentHuman);
               humanIndex = humans->size()-1;
           }
           //if the current animal doesn't exist in the list of animals
           if(animalIndex == -1)
           {
               animals->push_back(currentAnimal);
               animalIndex = animals->size()-1;
           }

           if(humanIndex == (humans->size()-1)){
               result->push_back(vector<float>());
           }

           //in case of bugs: check here
           if(animalIndex== (result->at(humanIndex)).size())
           {
               result->at(humanIndex).push_back(0);
           }

           result->at(humanIndex).at(animalIndex) = get<2>(scoredPairs[j]);
       }

       /* -- just prints the results
       for(std::vector<tuple <float>>::size_type f = 0; f != result->size(); f++) {
           for(std::vector<tuple <float>>::size_type c = 0; c != result->at(f).size(); c++) {
               cout << result->at(f).at(c) << " | ";

           }
           cout << endl;
       }
       */
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

void Utils::transpose(vector<vector<float> > &b)
{
    if (b.size() == 0)
        return;

    vector<vector<float> > trans_vec(b[0].size(), vector<float>());

    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            trans_vec[j].push_back(b[i][j]);
        }
    }

    b = trans_vec;    // <--- reassign here
}

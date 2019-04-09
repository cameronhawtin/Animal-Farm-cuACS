#include "Optimize.h"

Optimize::Optimize(vector<vector<float>> sc){
  //convert to pointer of pointer

  scoreTable = new vector<vector<float>*>();
  for(int i = 0; i < sc.size(); i++){
    scoreTable->push_back(new vector<float>(sc[i]));
  }

  subsetMaxMap = new unordered_map<string, float>;
  (*subsetMaxMap)["Sub-"] = 0;
  subsetPairListMap = new unordered_map<string, vector<int>*>();
  (*subsetPairListMap)["Sub-"] = new vector<int>();
}

Optimize::~Optimize(){

  delete subsetMaxMap;
  delete subsetPairListMap;
}
vector<int>* Optimize::getMatching(){

  vector<vector<int>*> *combinations = getCombinations(scoreTable->size(), scoreTable->at(0)->size());

  string maxCombKey;
  float maxCombScore = numeric_limits<float>::min();
  for(int i = 0; i < combinations->size(); i++){
    float curvalue = getMaxSubsetValue(combinations->at(i));
    if (curvalue > maxCombScore){
      maxCombScore = curvalue;
      maxCombKey = getSubsetKey(combinations->at(i));
    }
  }
  return subsetPairListMap->at(maxCombKey);
}

vector<vector<int>*>* Optimize::getCombinations(int choose, int from){
  vector<int> fromvec;
  vector<int> combination;
  vector<vector<int>*> combinations;
  for (int i = 0; i < from; i++){
    fromvec.push_back(i);
  }
  combinationsRecursive(0, choose, combination, fromvec, combinations);
  return new vector<vector<int>*> (combinations);
}

void Optimize::combinationsRecursive(int n, int m, vector<int> &combination, vector<int> &fromvec, vector<vector<int>*> &combinations) {
  if (m == 0) {
    combinations.push_back(new vector<int>(combination));
    return;
  }
  for (int i = n; i <= fromvec.size() - m; i++) {
    combination.push_back(fromvec[i]);
    combinationsRecursive(i+1, m-1, combination, fromvec, combinations);
    combination.pop_back();
  }
}

string Optimize::getSubsetKey(vector<int> *clientSubset){
  string ret = "Sub-";
  for(int i = 0; i < clientSubset->size(); i++){
    ret = ret + to_string(clientSubset->at(i)) + "-";
  }
  return ret;
}


float Optimize::getMaxSubsetValue(vector<int> *clientSubset){

  string key = getSubsetKey(clientSubset);
  int animalIndex = clientSubset->size() - 1;
  if (subsetMaxMap->count(key) > 0){
    return subsetMaxMap->at(key);
  }else{
    float max = -numeric_limits<float>::max();// initialize max to minimum value so first value will always be used
    float score;
    int clientIndex = -1;
    int maxClientIndex = -1;

    //vector<pair<int, int>> new
    for(int i = 0; i < clientSubset->size(); i++){
      clientIndex = clientSubset->at(i);
      vector<int> *smaller = subsetMinus(clientSubset, clientIndex);
      score = scoreTable->at(animalIndex)->at(clientIndex) + getMaxSubsetValue(smaller);
      if(score > max){
        max = score;
        maxClientIndex = clientIndex;
      }
      delete smaller;
    }
    (*subsetMaxMap)[key] = max;
    //add vector
    vector<int> test = * subsetPairListMap->at(getSubsetKey(subsetMinus(clientSubset, maxClientIndex)));
    vector<int> *indices = new vector<int>(test);
    indices->push_back(maxClientIndex);
    (*subsetPairListMap)[key] = indices;
    return max;
  }
}

vector<int>* Optimize::subsetMinus(vector<int> *clientSubset, int minus){
  vector<int> *ret = new vector<int>();
  for(int i = 0; i < clientSubset->size(); i++){
    if(minus != clientSubset->at(i)){
      ret->push_back(clientSubset->at(i));
    }
  }
  return ret;
}

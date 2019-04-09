#include "Optimize.h"

//vector<vector<float>> scoreTable;
//unordered_map<string, float> subsetMaxMap;
//init has "Sub-" = 0 for max, empty vector for pairlist
//unordered_map<string, *vector<pair<int, int>>> subsetPairListMap;
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
  for(int i = 0; i < combinations->size(); i++){
    vector<int>* vec = combinations->at(i);
    for(int j = 0; j < vec->size(); j++){
      cout << " " << vec->at(j) << " ";
    }
    cout << "\n"
  }


  string maxCombKey;
  float maxCombScore = numeric_limits<float>::min();
  cout << "test1\n";
  for(int i = 0; i < combinations->size(); i++){
    cout << "test2:" << i << "\n";
    float curvalue = getMaxSubsetValue(combinations->at(i));
    if (curvalue > maxCombScore){
      maxCombScore = curvalue;
      cout << "test2.1:" << i << "\n";
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
    fromvec.push_back(i+1);
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
    cout << "test3:" << i << "\n";
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
    float max = numeric_limits<float>::min();// initialize max to minimum value so first value will always be used
    float score;
    int clientIndex;
    int maxClientIndex;

    //vector<pair<int, int>> new
    for(int i = 0; i < clientSubset->size(); i++){
      cout << "test4:" << i << "\n";
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


int main()
{
  float row1[] = {4, 2, 8, 3};
  float row2[] = {5, 6, 2, 9};
  float row3[] = {7, 1, 4, 8};
  float row4[] = {8, 6, 4, 2};
  vector<float> r1 = vector<float>(row1, row1 + sizeof(row1) / sizeof(float));
  vector<float> r2 = vector<float>(row2, row2 + sizeof(row2) / sizeof(float));
  vector<float> r3 = vector<float>(row3, row3 + sizeof(row3) / sizeof(float));
  vector<float> r4 = vector<float>(row4, row4 + sizeof(row4) / sizeof(float));

  vector<vector<float>> test;
  test.push_back(r1);
  test.push_back(r2);
  test.push_back(r3);
  test.push_back(r4);

  //int cl[] = {0, 1, 2, 3};
  //vector<int> clients = vector<int>(cl, cl + sizeof(cl)/ sizeof(int));

  Optimize *op = new Optimize(test);
  vector<int>* matching = op->getMatching();
  for(int i = 0; i < matching->size(); i++){
    cout << matching->at(i) << "\n";
  }
  //cout << op->getMaxSubsetValue(clients);

  //for(int i = 0; i < clients->size(); i++){
  //  cout << i << ":" << op->subsetPairListMap->at(op->getSubsetKey(clients))->at(i)<<"\n";
  //}
  delete op;
  return 0;
}

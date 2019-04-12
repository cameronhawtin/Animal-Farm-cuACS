#ifndef OPTIMIZE_H
#define OPTIMIZE_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <tuple>
#include <stdexcept>
#include <vector>
#include <limits>

using namespace std;


class Optimize
{
        public:
                Optimize(vector<vector<float>>);
                ~Optimize();
                vector<int> *getMatching();

        private:
                float getMaxSubsetValue(vector<int>*);//client list
                unordered_map<string, float> *subsetMaxMap;
                unordered_map<string, vector<int>*> *subsetPairListMap;
                vector<vector<float>*> *scoreTable;
                string getSubsetKey(vector<int>*);
                vector<int>* subsetMinus(vector<int>*, int);
                void combinationsRecursive(int, int, vector<int>&, vector<int>&, vector<vector<int>*>&);
                vector<vector<int>*>* getCombinations(int, int);
};

#endif

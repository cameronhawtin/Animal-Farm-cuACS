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
                float getMaxSubsetValue(vector<int>*);//client list
        private:
                unordered_map<string, float> *subsetMaxMap;
                unordered_map<string, vector<int>*> *subsetPairListMap;
                vector<vector<float>*> *scoreTable;
                string getSubsetKey(vector<int>*);
                vector<int>* subsetMinus(vector<int>*, int);
};

#endif

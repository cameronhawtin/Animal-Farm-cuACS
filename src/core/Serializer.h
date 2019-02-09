#ifndef SERIALIZER_H
#define SERIALIZER_H
#include <vector>
#include <string>
using namespace std;

class Serializer{
  public:
    string serializeVector(vector<string>*);
    vector<string>* deserializeVector(string);
};
#endif

#ifndef SERIALIZER_H
#define SERIALIZER_H
#include <vector>
using namespace std;

class Serializer{
  public:
    string serializeVector(vector<string>*);
    vector<string>* deserializeVector(string);
}

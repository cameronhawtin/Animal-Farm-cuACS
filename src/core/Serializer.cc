#include "Serializer.h"
#include <vector>
using namespace std;

string Serializer::serializeVector(vector<string>* values)
{
  string serializedV = "";
  for(const string &value : *values){
    serializedV += value + "\n";
  }
  return serializedV.pop_back();//remove trailing newline
}

vector<string>* Serializer::deserializeVector(string serializedV)
{
  vector<string>* values = new vector<string>();
  string value = "";
  for (int i = 0; i < serializedV.length(); i++) {
    if(serializedV[i]=="\n"){
      values->push_back(value);
    } else {
      value += serializedV[i];
    }
  }
  return values;
}

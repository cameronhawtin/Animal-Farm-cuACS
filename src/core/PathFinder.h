#ifndef PATHFINDER_H
#define PATHFINDER_H
#include <vector>
#include <string>
using namespace std;

class PathFinder
{
public:
  vector<string>* getAllFilesInDir(string);
  string getAnimalDirectory();
  string getHumanDirectory();
};
#endif

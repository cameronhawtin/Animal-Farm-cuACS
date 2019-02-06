#ifndef PATHFINDER_H
#define PATHFINDER_H
#include <filesystem>
#include <vector>
using std::vector;

class PathFinder
{
public:
  vector<string>* getAllFilesInDir(string);
  string getAnimalDirectory();
  string getHumanDirectory();
}

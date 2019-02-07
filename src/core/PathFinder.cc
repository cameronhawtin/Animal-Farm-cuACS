#include "PathFinder.h"
#include <experimental/filesystem>
#include <string>
using std::vector;
using std::string;

vector<string>* PathFinder::getAllFilesInDir(string path)
{
  vector<string>* filelist = new vector<string>();
  for (const auto & entry : experimental::filesystem::directory_iterator(path)){
    filelist->push_back(entry.path());
  }
  return filelist;
}

string PathFinder::getAnimalDirectory()
{
  return "/Animal/";
}

string PathFinder::getHumanDirectory()
{
  return "/Human/";
}

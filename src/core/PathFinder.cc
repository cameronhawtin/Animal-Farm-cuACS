#include "PathFinder.h"
#include <filesystem>
using namespace std;

vector<string> PathFinder::getAllFilesInDir(string path)
{
  vector<string>* filelist = new vector<string>();
  for (const auto & entry : filesystem::directory_iterator(path)){
    filelist.push_back(entry.path());
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

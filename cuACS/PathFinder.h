#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <vector>
#include <string>
#include <experimental/filesystem>

using namespace std;

class PathFinder
{
        public:
                vector<string>* getAllFilesInDir(string);
                string getAnimalDirectory();
                string getHumanDirectory();
};

#endif

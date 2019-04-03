#include "PersistentStorageAPI.h"
#include "Serializer.h"
#include "PathFinder.h"
#include "StorageAdapter.h"
#include "FileStorageManager.h"
#include "Profile.h"
#include "Animal.h"
#include "Human.h"
#include <vector>
#include <string>

using namespace std;

void PersistentStorageAPI::storeProfile(Profile* p, string profileType)
{
        vector<string>* state;
        Serializer s;
        StorageAdapter* sa = new FileStorageManager();
        string dirPath = getDirectory(profileType);
        string filepath = "";

        state = p->getState();
        string fileContents = s.serializeVector(state);
        filepath = dirPath + state->at(0);
        sa->save(fileContents, filepath);
        delete state;
        delete sa;
}

void PersistentStorageAPI::storeProfiles(list<Profile*>* profiles, string profileType)
{
        for(Profile* p : *profiles){
                storeProfile(p, profileType);
        }
}

list<Profile*>* PersistentStorageAPI::retrieveProfiles(string profileType)
{
        list<Profile*>* result = new list<Profile*>();
        vector<string>* state;
        PathFinder pf;
        Profile* p;
        Serializer s;
        StorageAdapter* sa = new FileStorageManager();
        string dirPath = getDirectory(profileType);

        for(string filepath : *pf.getAllFilesInDir(dirPath)){
                string data = sa->load(filepath);
                state = s.deserializeVector(data);
                if(profileType == "Animal"){
                        p = new Animal(*state);
                } else if(profileType == "Human"){
                        p = new Human(*state);
                }
                delete state;
                result->push_back(p);
        }
        return result;
}

string PersistentStorageAPI::getDirectory(string profileType){
        PathFinder pf;
        if(profileType == "Animal"){
                return pf.getAnimalDirectory();
        } else if(profileType == "Human"){
                return pf.getHumanDirectory();
        }
}

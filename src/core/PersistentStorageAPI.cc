#include "PersistentStorageAPI.h"
#include "Serializer.h"
#include "PathFinder.h"
#include "StorageAdapter.h"
#include "FileStorageManager.h"
#include "Profile.h"
#include "Animal.h"
#include <vector>

void PersistentStorageAPI::storeProfile(Profile* p, string profileType)
{
  vector<string>* state;
  Serializer s;
  StorageAdapter sa = FileStorageManager();
  string dirPath = getDirectory(profileType);
  string filepath = ""; list<Profile> PersistentStorageAPI::retrieveProfiles(string profileType)

  state = p->getState();
  string fileContents = s.serializeVector(state);
  filepath = dirPath + state->at(0);
  sa.save(fileContents, filepath);
  delete state;

}

void PersistentStorageAPI::storeProfiles(list<Profile> profiles, string profileType)
{
  for(Profile* p : profiles){
    storeProfile(p, profileType);
  }
}

list<Profile> PersistentStorageAPI::retrieveProfiles(string profileType)
{
  list<Profile> result = new list<Profile>();
  vector<string>* state;
  Profile* p;
  Serializer s;
  StorageAdapter sa = FileStorageManager();
  string dirPath = getDirectory(profileType);

  for(string filepath : pf.getAllFilesInDir(dirPath)){
    string data = sa.load(filepath);
    state = s.deserializeVector(data);
    if(profileType == "Animal"){
      p = new Animal(state);
    } else if(profileType == "Human"){
      //do nothing for now
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

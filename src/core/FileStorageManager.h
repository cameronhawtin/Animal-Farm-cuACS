#ifndef FILESTORAGEMANAGER_H
#define FILESTORAGEMANAGER_H
#include "StorageAdapter.h"
using namespace std::string;

class FileStorageManager : public StorageAdapter
{
  public:
   void save(string, string);
   string load(string);
}

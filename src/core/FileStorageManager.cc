#include "FileStorageManager.h"
#include "FileOpenException.cc"
#include <stringstream>
#include <iostream>
#include <fstream>
using namespace std;

void FileStorageManager::save(string fileContents, string filePath)
{
  ofstream fileObject(filePath);
  if(fileObject.is_open()){
    fileObject << fileContents;
  } else {
    throw FileOpenException(filePath);
  }

  fileObject.close();
}

string FileStorageManager::load(string filePath)
{
  ifstream fileObject(filePath);
  if(fileObject.is_open()){
    stringstream buffer;
    buffer << fileObject.rdbuf();
  } else {
    throw FileOpenException(filePath);
  }
  fileObject.close();
  return buffer.str();
}

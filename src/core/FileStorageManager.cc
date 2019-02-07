#include "FileStorageManager.h"
#include "FileOpenException.cc"
#include <string>
#include <strstream>
#include <iostream>
#include <fstream>
using namespace std;

void FileStorageManager::save(string fileContents, string filePath)
{
  ofstream fileObject(filePath);
  if(fileObject.is_open()){
    fileObject << fileContents;
  } else {
    throw FileOpenException();
  }

  fileObject.close();
}

string FileStorageManager::load(string filePath)
{
  strstream buffer;
  ifstream fileObject(filePath);
  if(fileObject.is_open()){
    buffer << fileObject.rdbuf();
  } else {
    throw FileOpenException();
  }
  fileObject.close();
  return buffer.str();
}

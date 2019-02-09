#include "FileStorageManager.h"
#include "FileOpenException.cc"
#include <string>
#include <strstream>
#include <iostream>
#include <fstream>

using namespace std;

void FileStorageManager::save(string fileContents, string filePath)
{
        const char * fp = filePath.c_str();
        ofstream fileObject(fp);
        if(fileObject.is_open()){
                fileObject << fileContents;
        } else {
                throw FileOpenException();
        }
        fileObject.close();
}

string FileStorageManager::load(string filePath)
{
        const char * fp = filePath.c_str();
        strstream buffer;
        ifstream fileObject(fp);
        if(fileObject.is_open()){
                buffer << fileObject.rdbuf();
        } else {
                throw FileOpenException();
        }
        fileObject.close();
        return buffer.str();
}

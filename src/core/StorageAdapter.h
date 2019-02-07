#ifndef STORAGEADAPTER_H
#define STORAGEADAPTER_H
using std::string;

class StorageAdapter
{
    public:
       virtual int save(string, string) = 0;
       virtual string load(string) = 0;
};
#endif

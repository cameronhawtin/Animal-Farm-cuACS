#ifndef STORAGEADAPTER_H
#define STORAGEADAPTER_H

#include <string>
using std::string;

class StorageAdapter
{
        public:
                virtual void save(string, string) = 0;
                virtual string load(string) = 0;
};

#endif

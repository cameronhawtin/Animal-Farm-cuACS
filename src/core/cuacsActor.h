#ifndef CUACSACTOR_H
#define CUACSACTOR_H

#include "LinkedList.h"

class cuacsActor
{
    public:
        virtual LinkedList<string> getState() = 0;
};

#endif
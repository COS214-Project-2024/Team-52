#ifndef COLLECTALLTAX_H
#define COLLECTALLTAX_H
#include "Government.h"

class CollectAllTax{
    public:
 virtual void execute();
    void collectAllax(Government* gov);
};

#endif
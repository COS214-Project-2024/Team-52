#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include <iostream>
using namespace std;

class BuildingFactory{
    private:

    public:
        virtual Building* construct(string name) =0;
};

#endif
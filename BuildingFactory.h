#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include <iostream>
using namespace std;

class BuildingFactory{
    private:

    public:
        virtual Building* construct() =0;
};

#endif
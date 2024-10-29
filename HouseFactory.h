#ifndef HOUSEFACTORY_H
#define HOUSEFACTORY_H

#include <iostream>
#include "Building.h"
#include "BuildingFactory.h"
#include "House.h"
using namespace std;

class Building;
class HouseFactory: public BuildingFactory{
    private:
        Building* house;
    public:
        Building* construct(string name) override;
};

#endif
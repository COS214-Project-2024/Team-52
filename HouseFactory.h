#ifndef HOUSEFACTORY_H
#define HOUSEFACTORY_H

#include <iostream>
using namespace std;

class HouseFactory: public BuildingFactory{
    private:

    public:
        Building* construct(string name) override;
};

#endif
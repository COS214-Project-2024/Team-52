#ifndef COMMERCIALFACTORY_H
#define COMMERCIALFACTORY_H

#include <iostream>
using namespace std;

class CommercialFactory: public BuildingFactory{
    private:

    public:
        Building* construct(string name) override;
};

#endif
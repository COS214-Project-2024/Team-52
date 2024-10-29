#ifndef UNDERCONSTRUCTION_H
#define UNDERCONSTRUCTION_H

#include <iostream>
using namespace std;

class UnderConstruction: public BuildingState{
    private:

    public:
    void construct(Building* building) override;
    void operate(Building* building) override;
    void closeDown(Building* building) override;
    void damage(Building* building) override;
};

#endif
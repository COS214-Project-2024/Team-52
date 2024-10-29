#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include "Building.h"
#include "BuildingState.h"
using namespace std;

class BuidlingState;
class House: public Building{
    private:
        string size;
        BuidlingState* state;
    public:
    House(string name, string size);
    void displayInfo() override;
    void setState(BuidlingState* newState) override;
    void getState() override;
    void getName() override;
    void construct() override;
    void operate() override;
    void closeDown() override;
    void damage() override;
    Building* clone() override;
    void useResources() override;
};

#endif
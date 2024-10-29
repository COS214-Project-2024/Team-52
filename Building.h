#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include "BuildingState.h"
using namespace std;

class BuildingState;
class Building{
    private:
        string name;
        BuidlingState* state;
    public:
    Building(string name);
    virtual ~Building();
    void setState(BuidlingState* newState);
    void getState();
    void getName();
    virtual void construct();
    virtual void operate();
    virtual void closeDown();
    virtual void damage();
    virtual void displayInfo();
    virtual Building* clone();
    virtual void useResources();
};

#endif
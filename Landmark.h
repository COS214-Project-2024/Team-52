#ifndef LANDMARK_H
#define LANDMARK_H

#include <iostream>
#include "BuildingState.h"
#include "Operational.h"
#include "ClosedDown.h"
#include "Damaged.h"
#include "UnderConstruction.h"
using namespace std;

class Landmark: public Building{
    private:
        string name;
        string size;
        BuildingState* state;
    public:
    virtual ~Landmark() = default;
    Landmark(string name);
    Landmark(string name, string size, BuildingState* state);
    void setSize(string size);
    void displayInfo() override;
    void setState(BuildingState* newState) override;
    BuildingState* getState() override;
    void getName() override;
    void construct() override;
    void operate() override;
    void closeDown() override;
    void damage() override;
    Building* clone() override;
    void useResources() override;
};

#endif
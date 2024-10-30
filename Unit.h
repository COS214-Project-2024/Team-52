#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "Apartment.h"
#include "BuildingState.h"
#include "Building.h"
#include "UnderConstruction.h"
#include "Operational.h"
#include "ClosedDown.h"
#include "Damaged.h"
using namespace std;

class Unit: public Apartment{
    private:
        int unitNumber;
        string size;
        BuildingState* state;
    public:
        virtual ~Unit() = default;
        Unit(int number, string size);
        Unit(int number, string size, BuildingState* state);
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
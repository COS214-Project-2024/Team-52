#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H

#include <iostream>
#include <algorithm>
#include <vector>
#include "Apartment.h"
#include "Unit.h"
#include "BuildingState.h"
#include "Building.h"
using namespace std;

class Building;
class ApartmentBuilding: public Apartment{
    private:
        vector<Unit*> units;
        string name;
        string size;
        BuildingState* state;
    public:
        ApartmentBuilding(string name);
        ApartmentBuilding(string name, BuildingState* state);
        virtual ~ApartmentBuilding() = default;
        void addUnit(Unit* unit);
        void removeUnit(Unit* unit);
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
        void setSize(string size);
};

#endif
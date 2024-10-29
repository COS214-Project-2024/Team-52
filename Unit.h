#ifndef UNIT_H
#define UNIT_H

#include <iostream>
using namespace std;

class Unit: public Apartment{
    private:
        int unitNumber;
        string size;
        BuildingState* state;
    public:
        Unit(int number, string size);
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
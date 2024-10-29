#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H

#include <iostream>
using namespace std;

class ApartmentBuilding: public Apartment{
    private:
        vector<Unit*> units;
        string name;
    public:
        ApartmentBuilding(string name);
        ~ApartmentBuilding();
        void addUnit(Unit* unit);
        void removeUnit(Unit* unit);
        vvoid displayInfo() override;
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
#ifndef APARTMENTFACTORY_H
#define APARTMENTFACTORY_H

#include <iostream>
using namespace std;

class ApartmentFactory: public BuildingFactory{
    private:

    public:
        Unit* createUnit(int unitNumber, string size);
        Building* construct(string name) override;
};

#endif
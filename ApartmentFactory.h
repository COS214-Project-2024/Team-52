#ifndef APARTMENTFACTORY_H
#define APARTMENTFACTORY_H

#include <iostream>
using namespace std;

class ApartmentFactory: public BuildingFactory{
    private:

    public:
        Building* construct() override;
};

#endif
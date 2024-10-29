#ifndef LANDMARKFACTORY_H
#define LANDMARKFACTORY_H

#include <iostream>
using namespace std;

class LandmarkFactory: public BuildingFactory{
    private:

    public:
        Building* construct() override;
};

#endif
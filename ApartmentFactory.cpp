#include "ApartmentFactory.h"

Building* ApartmentFactory::construct(string name){
    return new ApartmentBuilding(name);
}

Unit* ApartmentFactory::createUnit(int unitNumber, string size){
    return new Unit(unitNumber, size);
}
#include "ApartmentFactory.h"

Building* ApartmentFactory::construct(){
    return new ApartmentBuilding();
}

Unit* ApartmentFactory::createUnit(int unitNumber, string size){
    return new Unit(unitNumber, size);
}
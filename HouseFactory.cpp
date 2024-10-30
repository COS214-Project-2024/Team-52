#include "HouseFactory.h"

Building* HouseFactory::construct(string name){
    house = new House(name);
    return house;
}
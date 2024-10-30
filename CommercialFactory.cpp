#include "CommercialFactory.h"

Building* CommercialFactory::construct(string name){
    return new CommercialBuilding(name);
}
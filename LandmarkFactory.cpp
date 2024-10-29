#include "LandmarkFactory.h"

Building* LandmarkFactory::construct(string name){
    return new Landmark(name);
}
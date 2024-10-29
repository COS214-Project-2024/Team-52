#include "LandmarkFactory.cpp"

Building* LandmarkFactory::construct(string name){
    return new Landmark(name);
}
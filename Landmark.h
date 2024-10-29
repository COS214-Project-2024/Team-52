#ifndef LANDMARK_H
#define LANDMARK_H

#include <iostream>
using namespace std;

class Landmark: public Building{
    private:
        string size;
        BuildingState* state;
    public:
    Landmark(string name, string size);
    void displayInfo() override;
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
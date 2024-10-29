#ifndef GOVERNMENTMEMENTO_H
#define GOVERNMENTMEMENTO_H

#include <vector>
#include <iostream>
using namespace std;

class Citizen;
class Building;

class GovernmentMemento {
    private:
        double buildingTaxRate;
        double citizenTaxRate;
        vector<Citizen*> citizens; 
        vector<Building*> buildings; 
    public:
        void getDetails();
        GovernmentMemento(double buildingTaxRate,double citizenTaxRate, vector<Citizen*> citizen,vector<Building*> buildings);
        double getbuildingTaxRate();
        double getcitizenTaxRate();
         vector<Citizen*> getcitizens();
         vector<Building*> getbuildings();
};      

#endif

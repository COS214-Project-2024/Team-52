#include "GovernmentMemento.h"

GovernmentMemento::GovernmentMemento(double b, double c, vector<Building*> buildingsC, vector<Citizen*> CitizensC)
    : buildingTaxRate(b), citizenTaxRate(c) {
        // for(Building* building : buildingsC){
        //     buildings.push_back(new Building(*building));
        // }
        // Must find a way to change this 

        for(Citizen* citizen : CitizensC){
            citizens.push_back(new Citizen(*citizen));
        }
}


void GovernmentMemento::getDetails(){
    cout << " Building Tax Rate: " << buildingTaxRate << endl ;
    cout << " Citizen Tax Rate: " << citizenTaxRate << endl ;
    cout << " Number of Buildings: " << buildings.size() << endl ;
    cout << " Number of Citizens: "<< citizens.size() << endl ;
}

GovernmentMemento::~GovernmentMemento(){
    for(Building* building : buildings){
        delete building ;
    }
    for(Citizen* citizen : citizens){
        delete citizen ;
    }
    
}
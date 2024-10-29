#include "ApartmentBuilding.h"

void ApartmentBuilding::getName(){
    cout<<name;
}

void ApartmentBuilding::addUnit(Unit* unit){
    if(unit){
        units.push_back(unit);
    } else{
        cout<<"Can't add null unit"<<endl;
    }
}

void ApartmentBuilding::removeUnit(Unit* unit){
    if(unit){
        units.erase(std::remove(units.begin(), units.end(), unit), units.end());
    } else{
        cout<<"Can't remove null unit"<<endl;
    }
}

void ApartmentBuilding::useResources(){

}

void ApartmentBuilding::displayInfo(){
    cout<<"This is an Apartment Building called "<<getName()<<" with the following units: "<<endl;
    int i =0;
    for (const auto& unit : units) {
        if(unit){
            i++;
            cout<<i<<". "<<unit->displayInfo()<<endl;
        }
    }
    cout<<"This Apartment Building has "<<i<<" units."<<endl;
}


ApartmentBuilding::ApartmentBuilding(string name): Building(name){
    construct();
}

ApartmentBuilding::ApartmentBuilding(string name, BuildingState* state): Building(name){
    this.state = state;
}

void ApartmentBuilding::setState(BuidlingState* newState){
    if(newState){
        this.state = newState;
    } else{
        cout<<"State can't be null"<<endl;
    }
}

void ApartmentBuilding::getState(){
    return state;
}

void ApartmentBuilding::construct(){
    state->construct(this);
    cout<<"Apartment Building "<<name<<" is now under construction"<<endl;
}

void ApartmentBuilding::operate(){
    state->operate(this);
    cout<<"Apartment Building "<<name<<" is now operational"<<endl;
}

void ApartmentBuilding::closeDown(){
    state->closeDown(this);
    cout<<"Apartment Building "<<name<<" is now closed down"<<endl;
}

void ApartmentBuilding::damage(){
    state->closeDown(this;)
    cout<<"Apartment Building "<<name<<" is now damaged"<<endl;
}

Building* ApartmentBuilding::clone(){
    cout<<"A clone of Apartment Building "<<name<<" has been created"<<endl;
    return new Unit(this.name, this.state);
}

void Unit::useResources(){
    
}
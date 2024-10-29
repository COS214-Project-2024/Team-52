#include "CommercialBuilding.h"

CommercialBuilding::CommercialBuilding(string name, string size): Building(name){
    this.size = size;
    construct();
}

CommercialBuilding::CommercialBuilding(string name, string size, BuildingState* state): Building(name){
    this.size = size;
    this.state = state;
}

void CommercialBuilding::displayInfo(){
    cout<<"This is a "<<size<<" sized Commercial Building."<<endl;
}

void CommercialBuilding::setState(BuidlingState* newState){
    if(newState){
        this.state = newState;
    } else{
        cout<<"State can't be null"<<endl;
    }
}

void CommercialBuilding::getState(){
    return state;
}

void CommercialBuilding::getName(){
    cout<<name;
}

void CommercialBuilding::construct(){
    state->construct(this);
    cout<<"Commercial Building "<<name<<" is now under construction"<<endl;
}

void CommercialBuilding::operate(){
    state->operate(this);
    cout<<"Commercial Building "<<name<<" is now operational"<<endl;
}

void CommercialBuilding::closeDown(){
    state->closeDown(this);
    cout<<"Commercial Building "<<name<<" is now closed down"<<endl;
}

void CommercialBuilding::damage(){
    state->closeDown(this;)
    cout<<"Commercial Building "<<name<<" is now damaged"<<endl;
}

Building* CommercialBuilding::clone(){
    cout<<"A clone of Commercial Building "<<name<<" has been created"<<endl;
    return new CommercialBuilding(this.name, this.size, this.state);
}

void CommercialBuilding::useResources(){
    
}
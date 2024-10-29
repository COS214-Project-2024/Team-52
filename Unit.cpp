#include "Unit.h"

Unit::Unit(string name, string size): Building(name){
    this.size = size;
    construct();
}

Unit::Unit(string name, string size, BuildingState* state): Building(name){
    this.size = size;
    this.state = state;
}

void Unit::displayInfo(){
    cout<<"This is a "<<size<<" sized Unit."<<endl;
}

void Unit::setState(BuidlingState* newState){
    if(newState){
        this.state = newState;
    } else{
        cout<<"State can't be null"<<endl;
    }
}

void Unit::getState(){
    return state;
}

void Unit::getName(){
    cout<<name;
}

void Unit::construct(){
    state->construct(this);
    cout<<"Unit "<<name<<" is now under construction"<<endl;
}

void Unit::operate(){
    state->operate(this);
    cout<<"Unit "<<name<<" is now operational"<<endl;
}

void Unit::closeDown(){
    state->closeDown(this);
    cout<<"Unit "<<name<<" is now closed down"<<endl;
}

void Unit::damage(){
    state->closeDown(this;)
    cout<<"Unit "<<name<<" is now damaged"<<endl;
}

Building* Unit::clone(){
    cout<<"A clone of Unit "<<name<<" has been created"<<endl;
    return new Unit(this.name, this.size, this.state);
}

void Unit::useResources(){
    
}
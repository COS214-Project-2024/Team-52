#include "CityFacade.h"
#include "CitySimulation.h"
#include "BuildingFactory.h"
#include "ApartmentFactory.h"
#include "CommercialFactory.h"
#include "HouseFactory.h"
#include "LandmarkFactory.h"
#include "Building.h"
#include "Apartment.h"
#include "ApartmentBuilding.h"
#include "Unit.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"
#include "BuildingState.h"
#include "UnderConstruction.h"
#include "Damaged.h"
#include "Operational.h"
#include "ClosedDown.h"
#include <iostream>
using namespace std;

void testFacade(){
    CitySimulation* simulation = new CitySimulation() ;
    simulation->start();
}

void testBasicBuildings(){
    Building* home = new House("Home");
    home->setSize("Big");
    home->operate();
    Building* newHome = home->clone();
    home->damage();
    newHome->closeDown();
    home->displayInfo();
    newHome->displayInfo();

    cout<<"================================="<<endl;

    Building* shop = new CommercialBuilding("myShop");
    shop->setSize("Small");
    shop->operate();
    Building* newShop = shop->clone();
    shop->damage();
    newShop->closeDown();
    shop->displayInfo();
    newShop->displayInfo();

    cout<<"================================="<<endl;

    Building* park = new Landmark("myPark");
    park->setSize("Small");
    park->operate();
    Building* newPark = park->clone();
    park->damage();
    newPark->closeDown();
    park->displayInfo();
    newPark->displayInfo();

    cout<<"================================="<<endl;

    Building* myApartmentBuilding = new ApartmentBuilding("Apartment Building");
    myApartmentBuilding->setSize("Small");
    myApartmentBuilding->operate();
    Building* newApartmentBuilding = myApartmentBuilding->clone();
    myApartmentBuilding->damage();
    myApartmentBuilding->displayInfo();
    newApartmentBuilding->displayInfo();

    cout<<"================================="<<endl;

    Building* myUnit = new Unit(123, "Medium");
    myUnit->setSize("Small");
    myUnit->operate();
    Building* newUnit = myUnit->clone();
    myUnit->damage();
    myUnit->displayInfo();
    newUnit->closeDown();
    newUnit->displayInfo();
}

void setCitizenDetails(Citizen* citizen, const std::string& name, int age, double income, int satisfaction, bool isEmployed) {
    citizen->setName(name);
    citizen->setAge(age);
    citizen->setIncome(income);
    citizen->setSatisfaction(satisfaction);
    citizen->setEmploymentStatus(isEmployed);
}

void testCitizenCreation() {
    // Create a builder and director
    ConcreteCitizenBuilder builder;
    CitizenDirector director(&builder);

    // Create a child citizen and display initial state
    Citizen* child = director.createChild("Tommy", 10, 7);
    std::cout << "Child Citizen Details (Before setting additional attributes):" << std::endl;
    child->display();
    std::cout << std::endl;

    // Set additional details and display updated state
    setCitizenDetails(child, "Tommy", 10, 0.0, 7, false);  
    std::cout << "Child Citizen Details (After setting additional attributes):" << std::endl;
    child->display();
    std::cout << std::endl;

    // Create an adult citizen and display initial state
    Citizen* adult = director.createAdult("Sarah", 35, 8, 45000.0, true);
    std::cout << "Adult Citizen Details (Before setting additional attributes):" << std::endl;
    adult->display();
    std::cout << std::endl;

    // Set additional details and display updated state
    setCitizenDetails(adult, "Sarah", 35, 45000.0, 8, true);  
    std::cout << "Adult Citizen Details (After setting additional attributes):" << std::endl;
    adult->display();
    std::cout << std::endl;

    // Clean up
    delete child;
    delete adult;
}

int main(){

    testFacade();
    
    // Test citizen creation
    testCitizenCreation();

    testBasicBuildings();

    return 0;
}

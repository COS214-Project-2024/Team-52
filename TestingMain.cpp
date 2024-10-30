#include "CityFacade.h"
#include "CitySimulation.h"
#include <iostream>
using namespace std;

void testFacade(){
    CitySimulation* simulation = new CitySimulation() ;
    simulation->start();
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

    return 0;
}

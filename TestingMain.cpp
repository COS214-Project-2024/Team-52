#include "CityFacade.h"
#include "CitySimulation.h"
#include <iostream>
using namespace std;

void testFacade(){
    CitySimulation* simulation = new CitySimulation() ;
    simulation->start();
}

int main(){

    testFacade();

    return 0;
}

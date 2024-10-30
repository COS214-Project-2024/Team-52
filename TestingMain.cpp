#include "CityFacade.h"
#include "CitySimulation.h"
#include <iostream>
using namespace std;

int main(){

    CitySimulation* simulation = new CitySimulation() ;
    simulation->start();

    return 0;
}

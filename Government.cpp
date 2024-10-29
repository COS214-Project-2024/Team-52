#include "Government.h"
#include "CollectAllTax.h"
#include "CollectBuildingTax.h"
#include "CollectCitizenTax.h"
#include "Building.h"
#include "GovernmentMemento.h"

Government::Government(double cRate, double bRate, vector<Citizen *> citizens, vector<Building *> buildings)
    : citizenTaxRate(cRate), buildingTaxRate(bRate), citizens(citizens), buildings(buildings) {
    
}

void Government::collectCitizenTax()
{
    
}

void Government::collectBuildingTax()
{
   
}

void Government::collectCityTax()
{
     collectalltax = new CollectAllTax();
    
}

void Government::moveIn(int numPeople, string reason)
{
    
}

void Government::addCitizen(Citizen* c)
{
    citizens.push_back(c);
    
}

void Government::addBuilding(Building* b)
{
    buildings.push_back(b);
}

GovernmentMemento* Government::saveState()
{
    return new GovernmentMemento(buildingTaxRate,citizenTaxRate,citizens,buildings);
}

void Government::restoreState(GovernmentMemento* memento)
{
    this->buildings = memento->getbuildings();
    this->citizens = memento->getcitizens();
    this->buildingTaxRate = memento->getbuildingTaxRate();
    this->citizenTaxRate = memento->getcitizenTaxRate();
}

void Government::displayState()
{
    
}

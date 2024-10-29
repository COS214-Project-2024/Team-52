#include "GovernmentMemento.h"

void GovernmentMemento::getDetails()
{
    std::cout<<"buildingTaxRate: "<< buildingTaxRate <<std::endl;
    std::cout<<"citizenTaxRate: "<< citizenTaxRate <<std::endl;
}

GovernmentMemento::GovernmentMemento(double buildingTaxRate,double citizenTaxRate, vector<Citizen*> citizen,vector<Building*> buildings)
{
    this->buildingTaxRate = buildingTaxRate;
    this->citizenTaxRate = citizenTaxRate;
    this->citizens = citizen;
    this->buildings = buildings;
}

double GovernmentMemento::getbuildingTaxRate()
{
    return buildingTaxRate;
}

double GovernmentMemento::getcitizenTaxRate()
{
    return citizenTaxRate;
}

vector<Citizen *> GovernmentMemento::getcitizens()
{
    return citizens;
}

vector<Building *> GovernmentMemento::getbuildings()
{
    return buildings;
}

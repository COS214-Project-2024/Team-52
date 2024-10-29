#ifndef GOVERNMENT_H
#define GOVERNMENT_H
#include "Citizen.h"
#include "CityGrowthManager.h"
#include <string>
#include <vector>
class GovernmentMediator;
class Building;
class GovernmentMemento;
class CollectBuildingTax;
class CollectCitizenTax;
class CollectAllTax;

using namespace std;

class Government
{
private:
  GovernmentMediator *mediator;
  Government *backup;
  CityGrowthManager *cityGrowthManager;
  CollectBuildingTax *collectbuildingtax;
  CollectCitizenTax *Collectcitizentax;
  CollectAllTax *collectalltax;
  vector<Citizen *> citizens;
  vector<Building *> buildings;
  double buildingTaxRate;
  double citizenTaxRate;

public:
  Government(double cRate, double bRate, vector<Citizen *> citizens,vector<Building *> buildings);

  // Command
  void collectCitizenTax();
  void collectBuildingTax();
  void collectCityTax();

  // Composite
  void moveIn(int numPeople, string reason);
  void addCitizen(Citizen *c);
  void addBuilding(Building *b);

  // Memento
  GovernmentMemento *saveState();
  void restoreState(GovernmentMemento *memento);
  void displayState();
};
#endif

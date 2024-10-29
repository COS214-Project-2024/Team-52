#ifndef CITYGROWTHMANAGER_H
#define CITYGROWTHMANAGER_H

class CityGrowthManager{
 private:
    int population;
    int numOfBuilding;
    double economicGrowthRate;
 public:
    void evaluatePopulationGrowth();
    void evaluateBuildingExpansion();
    void evaluateEconomicGrowth();
    void evaluateGrowth();
};

#endif
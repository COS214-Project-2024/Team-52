#ifndef APARTMENT_H
#define APARTMENT_H

#include <iostream>
using namespace std;

class Apartment: public Building{
    private:

    public:
        virtual ~Apartment() = default;
        virtual void displayInfo() const =0;
        virtual void useResources() = 0;
};

#endif
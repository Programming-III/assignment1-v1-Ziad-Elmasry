#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here
class Reptile : public Animal {
private:
    bool isVenomous;

public:
    Reptile(string n, int a, bool venomous, bool hungry = true) 
        : Animal(n, a, hungry), isVenomous(venomous) {}
    
    void display() override {
        Animal::display();
        cout << "Type: Reptile, Venomous: " << (isVenomous ? "Yes" : "No") << endl;
    }
};








#endif

#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here
class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal(string n, int a, string color, bool hungry = true) 
        : Animal(n, a, hungry), furColor(color) {}
    
    void display() override {
        Animal::display();
        cout << "Type: Mammal, Fur Color: " << furColor << endl;
    }
};





#endif

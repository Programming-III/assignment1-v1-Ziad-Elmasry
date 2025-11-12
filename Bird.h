#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 

class Bird : public Animal {
private:
    float wingSpan;

public:
    Bird(string n, int a, float span, bool hungry = true) 
        : Animal(n, a, hungry), wingSpan(span) {}
    
    void display() override {
        Animal::display();
        cout << "Type: Bird, Wing Span: " << wingSpan << " meters" << endl;
    }
};





#endif

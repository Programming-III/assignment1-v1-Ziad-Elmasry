#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    
    Animal(string n, int a, bool hungry = true) : name(n), age(a), isHungry(hungry) {}
    virtual ~Animal() {}
    
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << " years, Hungry: " << (isHungry ? "Yes" : "No") << endl;
    }
    
  
    void feed() {
        if (isHungry) {
            cout << name << " has been fed and is no longer hungry." << endl;
            isHungry = false;
        } else {
            cout << name << " is not hungry right now." << endl;
        }
    }
    
    
    bool getHungerStatus() { return isHungry; }
    void setHungerStatus(bool hungry) { isHungry = hungry; }
};




#endif

#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 
class Enclosure {
private:
    Animal** animals;       
    int capacity;           
    int currentCount;       

public:
    Enclosure(int cap) : capacity(cap), currentCount(0) {
        animals = new Animal*[capacity];
        for (int i = 0; i < capacity; i++) {
            animals[i] = nullptr;
        }
    }

    ~Enclosure() {
        for (int i = 0; i < currentCount; i++) {
            delete animals[i];
        }
        delete[] animals;
    }
    
    void addAnimal(Animal* a) {
        if (currentCount < capacity) {
            animals[currentCount] = a;
            currentCount++;
            cout << "Animal added to enclosure successfully." << endl;
        } else {
            cout << "Enclosure is full. Cannot add more animals." << endl;
        }
    }
    
    void displayAnimals() {
        if (currentCount == 0) {
            cout << "Enclosure is empty." << endl;
            return;
        }
        
        cout << "Animals in enclosure (" << currentCount << endl;
        for (int i = 0; i < currentCount; i++) {
            cout << "Animal " << (i + 1) << ":" << endl;
            animals[i]->display();
            cout << endl;
        }
    }
    
    int getCurrentCount() { return currentCount; }
    int getCapacity() { return capacity; }
};








#endif

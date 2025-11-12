#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
    Enclosure* enclosure1 = new Enclosure(10);

    Mammal* lion = new Mammal("Lion", 5, true, "Golden");
    Bird* parrot = new Bird("Parrot", 2, false, 0.5f);
    Reptile* snake = new Reptile("Snake", 3, true, true);
    
    enclosure1->addAnimal(lion);
    enclosure1->addAnimal(parrot);
    enclosure1->addAnimal(snake);

    Visitor* visitor = new Visitor("Sarah Ali", 3);
    
    enclosure1->displayAnimals();
    visitor->displayInfo();
    
    delete enclosure1;
    delete visitor;
    
    return 0;
}
    
    

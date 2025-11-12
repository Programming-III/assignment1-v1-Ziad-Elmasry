#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor {
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor(string name, int tickets) : visitorName(name), ticketsBought(tickets) {}

    void displayInfo() {
        cout << "Visitor Name: " << visitorName << endl;
        cout << "Tickets Bought: " << ticketsBought << endl;
    }
    
    string getVisitorName() { return visitorName; }
    int getTicketsBought() { return ticketsBought; }
};






#endif

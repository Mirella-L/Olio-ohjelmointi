#include "dog.h"

Dog::Dog() {
    cout << "Koiran konstruktori." << endl;
}
Dog::~Dog(){
    cout << "Koiran destruktori." << endl;
}
void Dog::callOut() const {
    cout << "Koira haukkuu!" << endl;
}

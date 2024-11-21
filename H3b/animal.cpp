#include "animal.h"

Animal::Animal() {
     cout << "Eläimen konstruktori." << endl;
}
Animal::~Animal(){
     cout << "Eläimen destuktori." << endl;
}
void Animal::callOut() const {
       cout << "Eläin ääntelee." << endl;
}

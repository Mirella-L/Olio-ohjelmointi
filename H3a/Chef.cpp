#include "Chef.h"
#include <iostream>

using namespace std;

Chef::Chef(const string& name) : name(name) {
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef() {
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad() const {
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup() const {
    cout << "Chef " << name << " makes soup" << endl;
}

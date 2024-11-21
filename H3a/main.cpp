#include <iostream>
#include "ItalianChef.h"
#include "Chef.h"

using namespace std;

int main(){

    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    cout << endl;

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    cout << "name of the Italian Chef is " << italianChef.getName() << endl;

    return 0;
}

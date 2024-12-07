#include <iostream>
#include "classB.h"
#include "AssosiationA.h"
#include "Aggregation.h"

using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << "\n" <<endl;

    int* myPointer = &a;
    cout << "Pointterin osoittama osoite on: " <<myPointer << endl;
    cout << "Pointterin osittaman muistipaikan arvo on: " << *myPointer << "\n" << endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << "\n" << endl;

    int& refA =a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistinpaikan arvo on: " << refA << endl;

    //int& refA =b; kyseistä asiaa ei voi tehdä, sillä koodillisesti se ei ole mahdollista
    //refA ei voi vaihtaa viittaamansa muuttujaa alustuksen jälkeen
    //myPointer osoittama arvo muuttuu, kun osoittimen osoite muutetaan

    cout << "\n \n*************************************" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<"\nAggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}


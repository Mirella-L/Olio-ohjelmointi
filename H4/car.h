#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>

using namespace std;

class Car {

private:

    string model;
    string brand;
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

public:
    Car();
    Car(const string& brand, const string& model);

    void setEngine();
    void setWheels();

    string getModel() const;
    void setModel(const string& model);

    string getBrand() const;
    void setBrand(const string& brand);

    void printDetails() const;
};

#endif // CAR_H

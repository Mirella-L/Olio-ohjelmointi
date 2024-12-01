#include "car.h"
#include <iostream>
using namespace std;

Car::Car() : model(""), brand("") {}

Car::Car(const string& brand, const string& model)
    : brand(brand), model(model) {}

void Car::setEngine() {

    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel1.setType("kesärengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesärengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesärengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesärengas");
}

void Car::setModel(const string& model) {
    this->model = model;
}

void Car::setBrand(const string& brand) {
    this->brand = brand;
}

string Car::getModel() const {
    return model;
}

string Car::getBrand() const {
    return brand;
}

void Car::printDetails() const {

    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, "
         << objEngine.getDisplacement() << " L" << endl;

    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}

#include <iostream>
#include <vector>

using namespace std;

class Car {

private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string carBrand, string carModel, int carYear)
        : brand(carBrand), model(carModel), yearModel(carYear) {}

    void printData() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
    }

};

int main(){

    vector<Car> carList;
    //car oliot
    Car car1("Volkswagen","Golf",2015);
    Car car2("Mercedes-Benz", "GLE", 2020);
    Car car3("BMW","330",2021);
    //lisätään ne listaan
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    //tulostetaan toisen alkion tiedot
    cout << "Second car in the list: " << endl;
    carList[1].printData();
    //kaikki autot for luupilla
    cout << "All the cars in teh list: " << endl;
    for (const auto& car :carList) {
        car.printData();
    }
    return 0;
}

#include <iostream>
#include <memory>

using namespace std;

class Car{ //vaihe 1

private:
    string brand;
    string model;
    int yearModel;

public:
    void setBrand(string b) { brand = b;}
    void setModel(string m) { model = m;}
    void setYearModel(int y){ yearModel = y;}
    void printData() const{
        cout << "Car details: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << yearModel << endl;
    }
};

class Rectangle{//vaihe 2

private:
    double width;
    double height;

public:
    void setWidth(double w) {width = w;}
    void setHeight(double h) {height = h;}
    double getArea() const {return width*height;}
    double getCircum() const {return 2*(width+height);}
};

class Student{ //vaihe 3

private:
    string name;
    int studentNumber;
    double average;

public:
    //setterit
    void setName(string n) {name = n;}
    void setStudentNumber(int sn) {studentNumber = sn;}
    void setAverage(double a) {average = a;}

    //getterit
    string getName() const {return name;}
    int getStudentNumber() const {return studentNumber;}
    double getAverage() const {return average;}

};

int main () {

    //vaihe 1
    Car myCar;
    myCar.setBrand("Ford");
    myCar.setModel("Fiesta");
    myCar.setYearModel(2014);
    myCar.printData();
    //vaihe 1 loppu

    //vaihe 2
    Rectangle* myRectangle = new Rectangle();
    myRectangle->setWidth(13.55);
    myRectangle->setHeight(16.88);
    cout << "Rectangle area: " << myRectangle->getArea() <<endl;
    cout << "Rectangle circumference: " << myRectangle->getCircum() << endl;
    delete myRectangle;
    //vaihe 2 loppu

    //vaihe 3
    unique_ptr<Student> myStudent = make_unique<Student>();
    myStudent->setName("Emma");
    myStudent->setStudentNumber(55);
    myStudent->setAverage(3.9);
    cout << "Student name: " << myStudent->getName() << endl;
    cout << "Student number: " << myStudent->getStudentNumber() << endl;
    cout << "Student average: " << myStudent->getAverage() << endl;
    //vaihe 3 loppu
    return 0;
}


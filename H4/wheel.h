#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel {

private:
    int size;
    string type;

public:
    Wheel();
    Wheel(int size, const string& type);

    int getSize() const;
    void setSize(int size);

    string getType() const;
    void setType(const string& type);

};

#endif // WHEEL_H

#ifndef CLASSB_H
#define CLASSB_H
#include <string>
using namespace std;

class ClassB {
private:
    string info;
public:
    void setInfo(const string& value);
    string getInfo() const;
};

#endif // CLASSB_H

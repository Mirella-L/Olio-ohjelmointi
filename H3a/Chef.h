#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

using namespace std;

class Chef {

public:
    explicit Chef(const string& name);
    virtual ~Chef();

    void makeSalad() const;
    void makeSoup() const;

protected:
    string name;
};


#endif // CHEF_H

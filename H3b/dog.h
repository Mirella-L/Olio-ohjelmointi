#ifndef DOG_H
#define DOG_H

#include "animal.h"

using namespace std;

class Dog : public Animal
{
public:
    Dog();
    ~Dog();

    void callOut() const;
};

#endif // DOG_H

#ifndef AGGREGATION_H
#define AGGREGATION_H

#include "ClassB.h"
#include <string>
using namespace std;

class AggregationA
{
private:
    ClassB &refB;
public:
    AggregationA(ClassB&);
    string getBinfo();
    void setBinfo(string);
};

#endif // AGGREGATION_H

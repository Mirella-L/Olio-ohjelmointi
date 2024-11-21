#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "Chef.h"

using namespace std;

class ItalianChef : public Chef {

public:
    explicit ItalianChef(const string& name);
    ~ItalianChef() override;

    void makePasta() const;
    string getName() const;
};


#endif // ITALIANCHEF_H

#pragma once
#include "Tableau.h"
class Tableauborne :
    public Tableau
{
    float min, max;

public:
    Tableauborne(int,float,float);
    const float& operator[](int) const;
};


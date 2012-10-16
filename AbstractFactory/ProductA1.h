#pragma once

#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA
{
public:
    ProductA1() {};
    ProductA1(const ProductA1& other) {};
    virtual ~ProductA1() {};

    AbstractProductA* Clone() const;
    void DoSomethingA () const {};
};


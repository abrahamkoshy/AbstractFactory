#pragma once

#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA
{
public:
    ProductA2() {};
    ProductA2(const ProductA2& other) {};
    virtual ~ProductA2() {};

    AbstractProductA* Clone() const;
    void DoSomethingA () const {};
};


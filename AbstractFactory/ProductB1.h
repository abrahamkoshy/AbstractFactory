#pragma once

#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB
{
public:
    ProductB1() {};
    ProductB1(const ProductB1& other) {};
    virtual ~ProductB1() {};

    AbstractProductB* Clone() const;
    void DoSomethingB () const {};
};


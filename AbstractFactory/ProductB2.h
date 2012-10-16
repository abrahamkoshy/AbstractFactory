#pragma once

#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB
{
public:
    ProductB2() {};
    ProductB2(const ProductB2& other) {};
    virtual ~ProductB2() {};

    AbstractProductB* Clone() const;
    void DoSomethingB () const {};
};


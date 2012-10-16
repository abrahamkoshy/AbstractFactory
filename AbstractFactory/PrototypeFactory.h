#pragma once

#include "AbstractFactory.h"

class AbstractProductA;
class AbstractProductB;

//this class implements the Abstract Factory pattern using the Prototype pattern

class PrototypeFactory : public AbstractFactory
{
public:
    PrototypeFactory(AbstractProductA* productA, AbstractProductB* productB);
    virtual ~PrototypeFactory();

    virtual AbstractProductA* CreateProductA() const;
    virtual AbstractProductB* CreateProductB() const;

private:
    AbstractProductA* productAPrototype;
    AbstractProductB* productBPrototype;
};


#include "stdafx.h"
#include "PrototypeFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"


PrototypeFactory::PrototypeFactory(AbstractProductA* productA, AbstractProductB* productB):
    productAPrototype(productA),
    productBPrototype(productB)
{
}

PrototypeFactory::~PrototypeFactory()
{
    //get rid of the prototypes
    delete productAPrototype;
    delete productBPrototype;
}

AbstractProductA* PrototypeFactory::CreateProductA() const
{
    return productAPrototype->Clone();
}

AbstractProductB* PrototypeFactory::CreateProductB() const
{
    return productBPrototype->Clone();
}

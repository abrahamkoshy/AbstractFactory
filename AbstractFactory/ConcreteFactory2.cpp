#include "stdafx.h"
#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"


ConcreteFactory2* ConcreteFactory2::instance = NULL;

ConcreteFactory2* ConcreteFactory2::Instance()
{
    if (instance == NULL)
    {
        instance = new ConcreteFactory2();
    }
    return instance;
}

AbstractProductA* ConcreteFactory2::CreateProductA() const
{
    return new ProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB() const
{
    return new ProductB2();
}
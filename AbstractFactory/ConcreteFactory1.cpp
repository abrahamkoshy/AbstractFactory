#include "stdafx.h"
#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"


ConcreteFactory1* ConcreteFactory1::instance = NULL;

ConcreteFactory1* ConcreteFactory1::Instance()
{
    if (instance == NULL)
    {
        instance = new ConcreteFactory1();
    }
    return instance;
}

AbstractProductA* ConcreteFactory1::CreateProductA() const
{
    return new ProductA1();
}

AbstractProductB* ConcreteFactory1::CreateProductB() const
{
    return new ProductB1();
}
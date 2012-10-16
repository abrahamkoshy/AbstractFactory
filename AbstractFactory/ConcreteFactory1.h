#pragma once

#include "AbstractFactory.h"

class AbstractProductA;
class AbstractProductB;

//this class implements the Abstract Factory pattern using the Factory Method & Singleton patterns

class ConcreteFactory1 : public AbstractFactory
{
public:
    static ConcreteFactory1* Instance();

    virtual AbstractProductA* CreateProductA() const;
    virtual AbstractProductB* CreateProductB() const;

private:
    ConcreteFactory1() {};
    virtual ~ConcreteFactory1() {};
    ConcreteFactory1(const ConcreteFactory1& other);
    ConcreteFactory1& operator=(const ConcreteFactory1& rhs);

    static ConcreteFactory1* instance;
};


#pragma once

#include "AbstractFactory.h"

class AbstractProductA;
class AbstractProductB;

//this class implements the Abstract Factory pattern using the Factory Method & Singleton patterns

class ConcreteFactory2 : public AbstractFactory
{
public:
    static ConcreteFactory2* Instance();

    virtual AbstractProductA* CreateProductA() const;
    virtual AbstractProductB* CreateProductB() const;

private:
    ConcreteFactory2() {};
    virtual ~ConcreteFactory2() {};
    ConcreteFactory2(const ConcreteFactory2& other);
    ConcreteFactory2& operator=(const ConcreteFactory2& rhs);

    static ConcreteFactory2* instance;
};


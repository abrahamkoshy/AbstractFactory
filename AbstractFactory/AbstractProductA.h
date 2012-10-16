#pragma once

class AbstractProductA
{
public:
    virtual ~AbstractProductA() {};

    //this method is required if we implement the Abstract Factory pattern using the Prototype pattern
    virtual AbstractProductA* Clone() const = 0;

    virtual void DoSomethingA() const = 0;
};


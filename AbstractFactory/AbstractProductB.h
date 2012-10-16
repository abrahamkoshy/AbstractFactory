#pragma once

class AbstractProductB
{
public:
    virtual ~AbstractProductB() {};

    //this method is required if we implement the Abstract Factory pattern using the Prototype pattern
    virtual AbstractProductB* Clone() const = 0;

    virtual void DoSomethingB() const = 0;
};


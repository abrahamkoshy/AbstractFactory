// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "PrototypeFactory.h"
#include "ProductA1.h"
#include "ProductA2.h"
#include "ProductB1.h"
#include "ProductB2.h"

int _tmain(int argc, _TCHAR* argv[])
{
    //creating new products using the Factory Method implementation
    AbstractProductA* productA1 = ConcreteFactory1::Instance()->CreateProductA();
    AbstractProductB* productB2 = ConcreteFactory2::Instance()->CreateProductB();

    //clean up
    delete productA1;
    delete productB2;
    productA1 = NULL;
    productB2 = NULL;

    //*****************************************************

    //creating new products using the Prototype implementation
    
    //first initialize the PrototypeFactory for each class of products
    AbstractFactory* concreteFactory1 = new PrototypeFactory(new ProductA1(), new ProductB1());
    AbstractFactory* concreteFactory2 = new PrototypeFactory(new ProductA2(), new ProductB2());

    productA1 = concreteFactory1->CreateProductA();
    productB2 = concreteFactory2->CreateProductB();

    //clean up
    delete productA1;
    delete productB2;
    productA1 = NULL;
    productB2 = NULL;

    return 0;
}


#include "stdafx.h"
#include "ProductB1.h"

AbstractProductB* ProductB1::Clone() const
{
    return new ProductB1(*this);
}

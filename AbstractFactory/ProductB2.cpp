#include "stdafx.h"
#include "ProductB2.h"

AbstractProductB* ProductB2::Clone() const
{
    return new ProductB2(*this);
}

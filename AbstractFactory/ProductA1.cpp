#include "stdafx.h"
#include "ProductA1.h"

AbstractProductA* ProductA1::Clone() const
{
    return new ProductA1(*this);
}

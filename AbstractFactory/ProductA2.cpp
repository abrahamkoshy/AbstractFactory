#include "stdafx.h"
#include "ProductA2.h"

AbstractProductA* ProductA2::Clone() const
{
    return new ProductA2(*this);
}
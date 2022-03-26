#pragma once
#include "Product.hpp"

class AbstractFactory
{
    public:
        virtual Product* CreateProductA() = 0;
        virtual Product* CreateProductB() = 0;
        virtual Product* CreateProductC() = 0;
};
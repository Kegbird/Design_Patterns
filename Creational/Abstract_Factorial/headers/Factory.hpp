#pragma once
#include "PoorFactory.hpp"
#include "RichFactory.hpp"

class Factory
{
    public:
        virtual ~Factory() = default;
        virtual Product* CreateProductA(AbstractFactory* factory);
        virtual Product* CreateProductB(AbstractFactory* factory);
        virtual Product* CreateProductC(AbstractFactory* factory);
};
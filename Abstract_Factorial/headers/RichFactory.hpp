#pragma once
#include "AbstractFactory.hpp"
#include "ProductA.hpp"
#include "ProductB.hpp"
#include "ProductC.hpp"

class RichFactory : public AbstractFactory
{
    public: 
        virtual Product* CreateProductA();
        virtual Product* CreateProductB();
        virtual Product* CreateProductC();
};
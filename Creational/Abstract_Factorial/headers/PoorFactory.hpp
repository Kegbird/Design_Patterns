#pragma once
#include"AbstractFactory.hpp"
#include "Product.hpp"
#include "ProductA.hpp"
#include "ProductB.hpp"
#include "ProductC.hpp"

class PoorFactory : public AbstractFactory
{
    public: 
        virtual Product* CreateProductA();
        virtual Product* CreateProductB();
        virtual Product* CreateProductC();
};
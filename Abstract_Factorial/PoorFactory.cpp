#include "headers/PoorFactory.hpp"

Product* PoorFactory::CreateProductA()
{
    Product* product = new ProductA("Computer", false);
    return product;
}

Product* PoorFactory::CreateProductB()
{
    Product* product = new ProductB("Smartphone", false);
    return product;
}

Product* PoorFactory::CreateProductC()
{
    Product* product = new ProductC("Car", false);
    return product;
}


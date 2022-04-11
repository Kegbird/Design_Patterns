#include "headers/RichFactory.hpp"

Product* RichFactory::CreateProductA()
{
    Product* product = new ProductA("Computer", true);
    return product;
}

Product* RichFactory::CreateProductB()
{
    Product* product = new ProductB("Smartphone", true);
    return product;
}

Product* RichFactory::CreateProductC()
{
    Product* product = new ProductC("Car", true);
    return product;
}


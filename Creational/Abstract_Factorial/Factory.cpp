#include"headers/Factory.hpp"

Product* Factory::CreateProductA(AbstractFactory* factory)
{
    return factory->CreateProductA();
}

Product* Factory::CreateProductB(AbstractFactory* factory)
{
    return factory->CreateProductB();
}

Product* Factory::CreateProductC(AbstractFactory* factory)
{
    return factory->CreateProductC();
}


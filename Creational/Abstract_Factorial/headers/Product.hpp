#pragma once
#include<string>

class Product
{
    protected:
        std::string name;
    public:
        Product(std::string name);
        virtual void Use() = 0;
};
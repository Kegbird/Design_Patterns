#pragma once
#include<iostream>
#include<string>
#include"Product.hpp"

class ProductA : public Product
{
    public:
        ProductA(std::string name, bool deluxe);
        virtual void Use();
    private:
        bool deluxe;
};
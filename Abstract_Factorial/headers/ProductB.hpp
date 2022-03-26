#pragma once
#include<iostream>
#include<string>
#include"Product.hpp"

class ProductB : public Product
{
    public:
        ProductB(std::string name, bool deluxe);
        virtual void Use();
    private:
        bool deluxe;
};
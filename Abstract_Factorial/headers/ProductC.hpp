#pragma once
#include<iostream>
#include<string>
#include"Product.hpp"

class ProductC : public Product
{
    public:
        ProductC(std::string name, bool deluxe);
        virtual void Use();
    private:
        bool deluxe;
};
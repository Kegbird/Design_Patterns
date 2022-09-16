#pragma once
#include<string>
#include<iostream>
#include "Dough.hpp"

class Pizza : public Dough
{
    public:
        void Prepare();
        void Topping(std::string topping);
        void BumpUp(int hours);
        void Cook(int degrees);
        void IsCooked();
    private:
        std::string topping;
};

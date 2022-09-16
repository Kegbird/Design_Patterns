#pragma once
#include<string>
#include<iostream>
#include "Dough.hpp"

class Oven
{
    public:
        void TurnOn();
        void TurnOff();
        void InsertDough(Dough* dough);
        void Cook(int degrees, int minutes);
    private:
        Dough* dough;
        bool is_working;
};

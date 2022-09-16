#pragma once
#include<iostream>
#include<string>
#include "Dough.hpp"

class Bread : public Dough
{
    public:
        void Prepare();
        void BumpUp(int hours);
        void Cook(int degrees);
        void IsCooked();
};

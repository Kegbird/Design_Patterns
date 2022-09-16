#pragma once
#include<string>
#include<iostream>
#include "Dough.hpp"

class Croissant : public Dough
{
    public:
        void Prepare();
        void Fill(std::string stuffing);
        void BumpUp(int hours);
        void Cook(int degrees);
        void IsCooked();
    private:
        std::string stuffing;
};

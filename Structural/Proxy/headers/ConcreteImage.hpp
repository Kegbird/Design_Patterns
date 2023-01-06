#pragma once
#include<iostream>
#include<string>
#include "Image.hpp"

class ConcreteImage : public Image
{
    public:
        ConcreteImage(int image_index);
        void Draw();
    private:
        std::string image;
};
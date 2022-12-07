#pragma once
#include<iostream>
#include<stdlib.h>
#include "Flyweight.hpp"

class CharacterFlyweight : public Flyweight
{
    public: 
        CharacterFlyweight(char* character, short* color);
        ~CharacterFlyweight();
        void Render();
    private:
        char* character;
        short* color;
};
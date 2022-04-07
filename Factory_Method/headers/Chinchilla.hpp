#pragma once
#include "Animal.hpp"

class Chinchilla : public Animal
{
    public:
        Chinchilla(std::string name);
        void Speak();
};
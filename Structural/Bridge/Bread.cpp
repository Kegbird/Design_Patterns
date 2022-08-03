#include "headers/Bread.hpp"

void Bread::Prepare()
{
    if(this->cooked)
    {
        std::cout << "The bread is ready!" << std::endl;
        return;
    }
    if(this->bumped_up)
    {
        std::cout << "The bread is ready to be cooked!" << std::endl;
        return;
    }
    if(this->prepared)
    {
        std::cout << "The bread's dough is ready to bumping up!" << std::endl;
        return;
    }
    std::cout << "Mixing flavor, water, olive oil, salt, sugar and yeast." << std::endl;
    this->prepared=true;
}

void Bread::BumpUp(int hours)
{
    if(!this->prepared)
    {
        std::cout << "Prepare the dough before!" << std::endl;
        return;
    }
    if(this->cooked)
    {
        std::cout << "The bread is already cooked!" << std::endl;
        return;
    }
    std::cout << "The bread's dough is bumping for " << hours << " hours." << std::endl;
    this->bumped_up=true;
}

void Bread::Cook(int degrees)
{
    if(!this->prepared)
    {
        std::cout << "Prepare the dough before!" << std::endl;
        return;
    }
    if(this->cooked)
    {
        std::cout << "Do you wanna burn your bread?" << std::endl;
        return;
    }
    if(this->bumped_up)
    {
        std::cout << "The bread's dough is cooking at " << degrees << " degrees." << std::endl;
        this->cooked = true;
    }
    else
    {
        std::cout << "The bread's dough needs to bump up before!" << std::endl;
    }
}
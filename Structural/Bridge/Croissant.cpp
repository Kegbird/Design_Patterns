#include "headers/Croissant.hpp"

void Croissant::IsCooked()
{
    if(this->cooked)
        std::cout << "The croissant is cooked!" << std::endl;
    else
        std::cout << "The croissant is not cooked... Use an oven!" << std::endl;
}

void Croissant::Prepare()
{
    if(this->cooked)
    {
        std::cout << "The croissant is ready!" << std::endl;
        return;
    }
    if(this->bumped_up)
    {
        std::cout << "The croissant is ready to be cooked!" << std::endl;
        return;
    }
    if(this->prepared)
    {
        std::cout << "The croissant's dough is ready to bumping up!" << std::endl;
        return;
    }
    std::cout << "Mixing flavor, water, butter, sugar, love and yeast." << std::endl;
    this->prepared=true;
}

void Croissant::BumpUp(int hours)
{
    if(this->cooked)
    {
        std::cout << "The croissant is already cooked!" << std::endl;
        return;
    }
    if(this->bumped_up)
    {
        std::cout << "The croissant is ready to be cooked!" << std::endl;
        return;
    }
    if(!this->prepared)
    {
        std::cout << "Prepare the dough before!" << std::endl;
        return;
    }
    std::cout << "The croissant's dough is bumping for " << hours << " hours." << std::endl;
    this->bumped_up=true;
}


void Croissant::Fill(std::string stuffing)
{
    if(!this->prepared)
    {
        std::cout << "Prepare the dough before!"<< std::endl;
        return;
    }
    if(!this->bumped_up)
    {
        std::cout << "The croissant's dough needs to bump up before!" << std::endl;
        return;
    }
    if(this->cooked)
    {
        std::cout << "The croissant has been filled with " << stuffing << std::endl;
        this->stuffing=stuffing;
    }
    else
    {
        std::cout << "You can't fill the croissant if it's not cooked!" << std::endl;
    }
}

void Croissant::Cook(int degrees)
{
    if(!this->prepared)
    {
        std::cout << "Prepare the dough before!" << std::endl;
        return;
    }
    if(this->cooked)
    {
        std::cout << "Do you wanna burn your croissant?" << std::endl;
        return;
    }
    if(this->bumped_up)
    {
        std::cout << "The croissant's dough is cooking at " << degrees << " degrees." << std::endl;
        this->cooked = true;
    }
    else
    {
        std::cout << "The croissant's dough needs to bump up before!" << std::endl;
    }
}
#include "headers/Pizza.hpp"

bool prepared;
        bool cooked;
        bool bumped_up;

void Pizza::Prepare()
{
    if(this->cooked)
    {
        std::cout << "The pizza is ready!" << std::endl;
        return;
    }
    if(this->bumped_up)
    {
        std::cout << "The pizza is ready to be cooked!" << std::endl;
        return;
    }
    if(this->prepared)
    {
        std::cout << "The pizza's dough is ready to bumping up!" << std::endl;
        return;
    }
    std::cout << "Mixing flour, water, olive oil, salt, sugar and yeast." << std::endl;
    this->prepared=true;
}

void Pizza::Topping(std::string topping)
{
    if(this->cooked)
    {
        std::cout << "The pizza is ready! Too late for other topping!" << std::endl;
        return;
    }
    if(!this->bumped_up)
    {
        std::cout << "The pizza's dough needs to bump up before!" << std::endl;
        return;
    }
    if(!this->prepared)
    {
        std::cout << "Prepare the dough before!" << std::endl;
        return;
    }
    std::cout << "Adding tomato sauce, mozzarella and "<<topping<<"."<<std::endl;
    this->topping=topping;
}

void Pizza::BumpUp(int hours)
{
    if(this->cooked)
    {
        std::cout << "The pizza is already cooked!" << std::endl;
        return;
    }
    if(this->bumped_up)
    {
        std::cout << "The pizza is ready to be cooked!" << std::endl;
        return;
    }
    if(!this->prepared)
    {
        std::cout << "Prepare the dough before!" << std::endl;
        return;
    }
    std::cout << "The pizza's dough is bumping for " << hours << " hours." << std::endl;
    this->bumped_up=true;
}

void Pizza::Cook(int degrees)
{
    if(!this->prepared)
    {
        std::cout << "Prepare the dough before!" << std::endl;
        return;
    }
    if(this->cooked)
    {
        std::cout << "Do you wanna burn your pizza?" << std::endl;
        return;
    }
    if(this->bumped_up)
    {
        std::cout << "The pizza's dough is cooking at " << degrees << " degrees." << std::endl;
        this->cooked = true;
    }
    else
    {
        std::cout << "The pizza's dough needs to bump up before!" << std::endl;
    }
}
#include "headers/Oven.hpp"

void Oven::TurnOn()
{
    std::cout<< "Turning on the oven!" << std::endl;
    this->is_working=true;
}

void Oven::TurnOff()
{
    if(dough!=nullptr)
    {
        std::cout<<"There is still a dough in the oven!"<<std::endl;
        return;
    }
    std::cout<< "Turning off the oven!" << std::endl;
    this->is_working=false;
}

void Oven::InsertDough(Dough* dough)
{
    this->dough=dough;
}

void Oven::Cook(int degrees, int minutes)
{
    if(this->dough==nullptr)
    {
        std::cout<<"Put a dough in the oven before!" << std::endl;
        return;
    }
    this->dough->Cook(degrees);
    this->dough=nullptr;
}

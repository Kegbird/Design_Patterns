#include "headers/Cat.hpp"

Cat::Cat(std::string name) : Animal(name)
{ }

void Cat::Speak()
{
    std::cout<<"\nMy name is "<<this->name<<" and I'm a cat nya nya.\n"<<std::endl;
}
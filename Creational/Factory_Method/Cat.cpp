#include "headers/Cat.hpp"

Cat::Cat(std::string name) : Animal(name)
{ }

void Cat::Speak()
{
    std::cout<<"My name is "<<this->name<<" and I'm a cat nya nya."<<std::endl;
}
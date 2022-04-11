#include "headers/Dog.hpp"

Dog::Dog(std::string name) : Animal(name)
{ }

void Dog::Speak()
{
    std::cout<<"\nMy name is "<<this->name<<" and I'm a dog woof woof.\n"<<std::endl;
}
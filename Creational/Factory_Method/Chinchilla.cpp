#include "headers/Chinchilla.hpp"

Chinchilla::Chinchilla(std::string name) : Animal(name)
{ }

void Chinchilla::Speak()
{
    std::cout<<"\nMy name is "<<this->name<<" and I'm a smart chinchilla squitt squitt.\n"<<std::endl;
}
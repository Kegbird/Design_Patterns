#include "headers/Chinchilla.hpp"

Chinchilla::Chinchilla(std::string name) : Animal(name)
{ }

void Chinchilla::Speak()
{
    std::cout<<"My name is "<<this->name<<" and I'm a smart chinchilla squitt squitt."<<std::endl;
}
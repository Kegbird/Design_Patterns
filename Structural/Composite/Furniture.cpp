#include "headers/Furniture.hpp"

Furniture::Furniture(std::string element_name) : HouseElement(element_name)
{
}

void Furniture::AddElement(HouseElement* element)
{
    HouseElement::AddElement(element);
    std::cout<<"*** Adding a "<<element->element_name<<". ***"<<std::endl;
}

bool Furniture::RemoveElement(HouseElement* element)
{
    std::cout<<"*** Removing a "<<element->element_name<<". ***"<<std::endl;
    return HouseElement::RemoveElement(element);
}

void Furniture::Clean()
{
    std::cout<<"*** Cleaning furniture: "<<this->element_name<<". ***"<<std::endl;
    HouseElement::Clean();
    std::cout<<"*** "<<this->element_name<<" Cleaned! ***"<<std::endl;
}

#include "headers/Room.hpp"

Room::Room(std::string element_name) : HouseElement(element_name)
{
}

void Room::AddElement(HouseElement* element)
{
    HouseElement::AddElement(element);
    std::cout<<"*** Adding "<<element->element_name<<" into "<<this->element_name<<". ***"<<std::endl;
}

bool Room::RemoveElement(HouseElement* element)
{
    std::cout<<"*** Removing "<<element->element_name<<" from "<<this->element_name<<". ***"<<std::endl;
    return HouseElement::RemoveElement(element);
}

void Room::Clean()
{
    std::cout<<"*** Cleaning room "<<this->element_name<<". ***"<<std::endl;
    HouseElement::Clean();
    std::cout<<"*** "<<this->element_name<<" Cleaned! ***"<<std::endl;
}

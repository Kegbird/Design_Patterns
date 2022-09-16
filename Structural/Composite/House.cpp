#include "headers/House.hpp"

House::House(std::string element_name) : HouseElement(element_name)
{
}

void House::AddElement(HouseElement* element)
{
    HouseElement::AddElement(element);
    std::cout<<"*** Adding a "<<element->element_name<<" into my house. ***"<<std::endl;
}

bool House::RemoveElement(HouseElement* element)
{
    std::cout<<"*** Removing a "<<element->element_name<<" from my house. ***"<<std::endl;
    return HouseElement::RemoveElement(element);
}

void House::Clean()
{
    std::cout<<"*** Cleaning "<<this->element_name<<". ***"<<std::endl;
    HouseElement::Clean();
    std::cout<<"*** Phew that was a lot. ***"<<std::endl;
}

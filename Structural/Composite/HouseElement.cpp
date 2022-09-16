#include "headers/HouseElement.hpp"

HouseElement::HouseElement(std::string element_name)
{
    this->element_name=element_name;
}

void HouseElement::AddElement(HouseElement* element)
{
    this->elements.push_back(element);
}

bool HouseElement::RemoveElement(HouseElement* element)
{
    for(std::vector<HouseElement*>::iterator it = this->elements.begin(); it != this->elements.end(); ++it)
    {
        if(element==*it)
        {
            this->elements.erase(it);
            return true;
        }
    }
    return false;
}

void HouseElement::Clean()
{
    for(std::vector<HouseElement*>::iterator it = this->elements.begin(); it != this->elements.end(); ++it)
    {
        (*it)->Clean();
    }
}

HouseElement::~HouseElement()
{
    for(std::vector<HouseElement*>::iterator it = this->elements.begin(); it != this->elements.end(); ++it)
    {
        delete *it;
    }
}

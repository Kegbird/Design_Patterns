#pragma once
#include "HouseElement.hpp"

class House : public HouseElement
{
    public:
        House(std::string element_name);
        virtual void AddElement(HouseElement* element);
        virtual bool RemoveElement(HouseElement* element);
        virtual void Clean();
};
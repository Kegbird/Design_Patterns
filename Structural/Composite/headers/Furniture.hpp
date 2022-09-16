#pragma once
#include "HouseElement.hpp"

class Furniture : public HouseElement
{
    public:
        Furniture(std::string element_name);
        virtual void AddElement(HouseElement* element);
        virtual bool RemoveElement(HouseElement* element);
        virtual void Clean();
};
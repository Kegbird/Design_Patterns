#pragma once
#include "HouseElement.hpp"

class Room : public HouseElement
{
    public:
        Room(std::string element_name);
        virtual void AddElement(HouseElement* element);
        virtual bool RemoveElement(HouseElement* element);
        virtual void Clean();
};
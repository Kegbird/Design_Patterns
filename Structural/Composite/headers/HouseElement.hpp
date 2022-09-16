#pragma once
#include<iostream>
#include<string>
#include<vector>

class HouseElement
{
    public:
        HouseElement(std::string element_name);
        virtual void AddElement() = 0;
        virtual void RemoveElement(HouseElement* element) = 0;
        virtual void Clean() = 0;
        virtual ~HouseElement();
    private:
        std::string element_name;
        std::vector<HouseElement*> elements;
};

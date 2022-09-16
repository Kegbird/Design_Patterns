#pragma once
#include<iostream>
#include<string>
#include<vector>

class HouseElement
{
    public:
        HouseElement();
        HouseElement(std::string element_name);
        virtual void AddElement(HouseElement* element);
        virtual bool RemoveElement(HouseElement* element);
        virtual void Clean();
        ~HouseElement();
        std::string element_name;
    private:
        std::vector<HouseElement*> elements;
};

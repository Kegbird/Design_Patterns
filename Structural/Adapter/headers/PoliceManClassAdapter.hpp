#pragma once
#include<string>
#include<iostream>
#include "Greet.hpp"
#include "PoliceMan.hpp"
#include "GradeEnum.hpp"

class PoliceManClassAdapter : public Greet, public PoliceMan
{
    public:
        PoliceManClassAdapter(std::string firstname, std::string lastname, int age, GradeEnum grade);
        virtual ~PoliceManClassAdapter() = default;
        virtual void SayHello();
};
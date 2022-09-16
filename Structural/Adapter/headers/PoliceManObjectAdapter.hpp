#pragma once
#include<string>
#include<iostream>
#include "Greet.hpp"
#include "PoliceMan.hpp"
#include "GradeEnum.hpp"

class PoliceManObjectAdapter
{
    public:
        PoliceManObjectAdapter(std::string firstname, std::string lastname, int age, GradeEnum grade);
        virtual ~PoliceManObjectAdapter();
        virtual void SayHello();
        virtual void Status();
        std::string GetFirstName();
        std::string GetLastName();
        int GetAge();
        GradeEnum GetGrade();
    private:
        PoliceMan* police_man;
};
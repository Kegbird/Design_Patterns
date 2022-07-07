#pragma once
#include<string>
#include<iostream>
#include "GradeEnum.hpp"

class PoliceMan
{
    public:
        PoliceMan(std::string name, std::string lastname, int age, GradeEnum grade);
        virtual ~PoliceMan() = default;
        virtual void Status();
        std::string GetFirstName();
        std::string GetLastName();
        int GetAge();
        GradeEnum GetGrade();
    private:
        std::string firstname;
        std::string lastname;
        int age;
        GradeEnum grade;
};
#include "headers/PoliceMan.hpp"

PoliceMan::PoliceMan(std::string firstname, std::string lastname, int age, GradeEnum grade)
{
    this->firstname=firstname;
    this->lastname=lastname;
    this->age=age;
    this->grade=grade;
}

std::string PoliceMan::GetFirstName()
{
    return this->firstname;
}

std::string PoliceMan::GetLastName()
{
    return this->lastname;
}

int PoliceMan::GetAge()
{
    return this->age;
}

GradeEnum PoliceMan::GetGrade()
{
    return this->grade;
}

void PoliceMan::Status()
{
    std::cout<<"Grade: "<<GradeToString(this->grade)<<std::endl;
}
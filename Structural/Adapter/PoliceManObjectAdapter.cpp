#include "headers/PoliceManObjectAdapter.hpp"

PoliceManObjectAdapter::PoliceManObjectAdapter(std::string firstname, std::string lastname, int age, GradeEnum grade)
{
    this->police_man = new PoliceMan(firstname, lastname, age, grade);
}

void PoliceManObjectAdapter::SayHello()
{
    std::cout<<"Hello! I'm a police man and my name is " << police_man->GetFirstName() << " " << police_man->GetLastName() <<"!"<< std::endl;
}

PoliceManObjectAdapter::~PoliceManObjectAdapter()
{
    delete this->police_man;
}

std::string PoliceManObjectAdapter::GetFirstName()
{
    return this->police_man->GetFirstName();
}

std::string PoliceManObjectAdapter::GetLastName()
{
    return this->police_man->GetLastName();
}

int PoliceManObjectAdapter::GetAge()
{
    return this->police_man->GetAge();
}

GradeEnum PoliceManObjectAdapter::GetGrade()
{
    return this->police_man->GetGrade();
}

void PoliceManObjectAdapter::Status()
{
    this->police_man->Status();
}
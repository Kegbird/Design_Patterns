#include "headers/PoliceManClassAdapter.hpp"

PoliceManClassAdapter::PoliceManClassAdapter(std::string firstname, std::string lastname, int age, GradeEnum grade) : PoliceMan(firstname, lastname, age, grade)
{

}

void PoliceManClassAdapter::SayHello()
{
    std::cout<<"Hello! I'm a police man and my name is " << this->GetFirstName() << " " << this->GetLastName() <<"!"<< std::endl;
}
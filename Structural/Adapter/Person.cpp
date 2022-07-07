#include "headers/Person.hpp"

Person::Person(std::string firstname, std::string lastname, std::string description, int age)
{
    this->firstname=firstname;
    this->lastname=lastname;
    this->age=age;
}

void Person::Describe()
{
    std::cout<<this->description<<std::endl;
}

void Person::SayHello()
{
    std::cout << "Hello! My name is " << this->firstname << "!" << std::endl;
}

#pragma once
#include<string>
#include<iostream>
#include "Greet.hpp"

class Person : public Greet
{
    public:
        Person(std::string firstname, std::string lastname, std::string description, int age);
        virtual ~Person() = default;
        virtual void Describe();
        virtual void SayHello();
    private:
        std::string firstname;
        std::string lastname;
        std::string description;
        int age;
};

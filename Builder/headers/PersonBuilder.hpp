#pragma once
#include<string>
#include <ctime>
#include <cstdlib>
#include<iostream>
#include"Person.hpp"

class PersonBuilder
{
    public:
        PersonBuilder();
        Person* BuildBully(std::string name, int age);
        Person* BuildNerd(std::string name, int age);
        Person* BuildWarrior(std::string name, int age);
        Person* BuildNinja(std::string name, int age);
};
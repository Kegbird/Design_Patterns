#pragma once
#include<string>
#include<iostream>

class Person
{
    public:
        Person(std::string name, int age, int strength, int height, int knowledge, int speed);
        void Describe();
    private:
        std::string name;
        int age;
        int strength;
        int height;
        int knowledge;
        int speed;
};

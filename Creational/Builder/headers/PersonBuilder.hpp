#pragma once
#include<string>
#include<iostream>
#include"Person.hpp"

class PersonBuilder
{
    public:
        void SetName(std::string name);
        void SetAge(int age);
        void SetStrength(int strength);
        void SetHeight(int height);
        void SetKnowledge(int knowledge);
        void SetSpeed(int speed);
        Person* Build();
        virtual ~PersonBuilder() = default;
    private:
        std::string name;
        int age;
        int strength;
        int height;
        int knowledge;
        int speed;
};
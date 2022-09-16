#pragma once
#include<string>
#include<iostream>

class Animal {
    public:
        Animal(std::string name);
        virtual ~Animal() = default;
        virtual void Speak() = 0;
    protected:
        std::string name;
};
#include"headers/PersonBuilder.hpp"

void PersonBuilder::SetName(std::string name)
{
    this->name=name;
}

void PersonBuilder::SetAge(int age)
{
    this->age=age;
}

void PersonBuilder::SetHeight(int height)
{
    this->height=height;
}

void PersonBuilder::SetKnowledge(int knowledge)
{
    this->knowledge=knowledge;
}

void PersonBuilder::SetSpeed(int speed)
{
    this->speed=speed;
}

void PersonBuilder::SetStrength(int strength)
{
    this->strength=strength;
}

Person* PersonBuilder::Build()
{
    Person* person = new Person(name, age, strength, height, knowledge, speed);
    return person;
}
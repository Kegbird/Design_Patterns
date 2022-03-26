#include"headers/Person.hpp"

Person::Person(std::string name, int age, int strength, int height, int knowledge, int speed)
{
    this->name=name;
    this->age=age;
    this->strength=strength;
    this->height=height;
    this->knowledge=knowledge;
    this->speed=speed;
}
      
void Person::Describe()
{
    std::cout << "DESCRIPTION\n" << std::endl;
    std::cout << "Name:" << this->name << "\n" <<std::endl;
    std::cout << "Age:" << this->age << "\n" <<std::endl;
    std::cout << "Strength:" << this->strength << "\n" <<std::endl;
    std::cout << "Height:" << this->height << "\n" <<std::endl;
    std::cout << "Knowledge:" << this->knowledge << "\n" <<std::endl;
    std::cout << "Speed:" << this->speed << "\n" <<std::endl;
}
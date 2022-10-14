#pragma once
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Chinchilla.hpp"

enum AnimalEnum {
    CAT,
    DOG,
    CHINCHILLA,
};

class AnimalFactory
{
public:
    Animal* CreateAnimal(AnimalEnum animal_id, std::string name);
};

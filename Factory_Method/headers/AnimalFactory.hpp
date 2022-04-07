#pragma once
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Chinchilla.hpp"

enum AnimalEnum {
    catEnum,
    dogEnum,
    chinchillaEnum,
};

class AnimalFactory
{
public:
    Animal* CreateAnimal(AnimalEnum animalId, std::string name);
};

#include "headers/AnimalFactory.hpp"

Animal* AnimalFactory::CreateAnimal(AnimalEnum animal_id, std::string name)
{
    switch (animal_id)
    {
    case CAT:
        return new Cat(name);
        break;
    case DOG:
        return new Dog(name);
        break;
    default:
        return new Chinchilla(name);
        break;
    }
}
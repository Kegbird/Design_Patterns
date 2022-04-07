#include "headers/AnimalFactory.hpp"

Animal* AnimalFactory::CreateAnimal(AnimalEnum animalId, std::string name)
{
    switch (animalId)
    {
    case catEnum:
        return new Cat(name);
        break;
    case dogEnum:
        return new Dog(name);
        break;
    default:
        return new Chinchilla(name);
        break;
    }
}
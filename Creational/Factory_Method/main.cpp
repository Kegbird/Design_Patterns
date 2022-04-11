#include "headers/AnimalFactory.hpp"
#include "headers/Animal.hpp"

int main(int argc, char* argv[])
{
    std::cout<<"\nFactory method pattern stupid example\n"<<std::endl;
    AnimalFactory* animalFactory = new AnimalFactory();

    Animal* cat = animalFactory->CreateAnimal(catEnum, "Tom");
    Animal* dog = animalFactory->CreateAnimal(dogEnum, "Bowsie");
    Animal* chinchilla = animalFactory->CreateAnimal(chinchillaEnum, "Rattigan");

    cat->Speak();
    dog->Speak();
    chinchilla->Speak();
}
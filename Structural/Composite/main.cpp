#include<iostream>
#include "headers/Room.hpp"
#include "headers/Furniture.hpp"
#include "headers/House.hpp"

int main(int argc, char* argv[])
{
    std::cout<<"\nComposite pattern stupid example\n"<<std::endl;

    std::cout<<"Well I want to create the home of my dreams!"<<std::endl;

    House* house = new House("Home sweet home");
    Room* living_room = new Room("Living Room");
    Room* kitchen = new Room("Kitchen");
    Room* garage = new Room("Garage");
    Room* bedroom = new Room("Bedroom");

    std::cout<<"Let's add some furnitures!\n"<<std::endl;
    house->AddElement(living_room);
    house->AddElement(kitchen);
    house->AddElement(garage);
    house->AddElement(bedroom);

    Furniture* bookshelf = new Furniture("Bookshelf");
    Furniture* armchair = new Furniture("Armchair");
    Furniture* tv_cabinet = new Furniture("Tv Cabinet");

    Furniture* hob = new Furniture("Hob");
    Furniture* dresser = new Furniture("Dresser");
    Furniture* oven = new Furniture("Oven");
    Furniture* fridge = new Furniture("Fridge");

    Furniture* bed = new Furniture("Bed");
    Furniture* nigh_table = new Furniture("Night Table");
    Furniture* wardrobe = new Furniture("Wardrobe");

    Furniture* shelf = new Furniture("Shelf");
    Furniture* work_bench = new Furniture("Work bench");

    living_room->AddElement(bookshelf);
    living_room->AddElement(armchair);
    living_room->AddElement(tv_cabinet);

    kitchen->AddElement(hob);
    kitchen->AddElement(dresser);
    kitchen->AddElement(oven);
    kitchen->AddElement(fridge);

    bedroom->AddElement(bed);
    bedroom->AddElement(nigh_table);
    bedroom->AddElement(wardrobe);

    garage->AddElement(shelf);
    garage->AddElement(work_bench);

    //And I could go on in the hierarchy...

    std::cout<<"\nMmh that armchair is horrible, let's remove it!\n"<<std::endl;
    living_room->RemoveElement(armchair);

    std::cout<<"\nOh no! My home is a mess... Let's clean up!\n"<<std::endl;

    house->Clean();

    delete house;
    delete armchair;

    return 0;
}
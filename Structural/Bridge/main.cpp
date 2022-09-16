#include "headers/Oven.hpp"
#include "headers/Pizza.hpp"
#include "headers/Dough.hpp"
#include "headers/Croissant.hpp"
#include "headers/Bread.hpp"

int main(int argc, const char * argv[])
{
    std::cout<<"\nBridge pattern stupid example\n"<<std::endl;
    
    Oven* oven = new Oven();
    oven->TurnOn();

    std::cout << "\nLet's prepare some bread!"<<std::endl;
    Bread* bread = new Bread();
    bread->Prepare();
    bread->BumpUp(3);
    
    oven->InsertDough(bread);
    oven->Cook(220, 25);

    std::cout << "\nLet's prepare a ''pizza''!"<<std::endl;
    Pizza* pizza = new Pizza();
    pizza->Prepare();
    pizza->BumpUp(10);
    pizza->Topping("pineapple");
    
    oven->InsertDough(pizza);
    oven->Cook(200, 5);

    std::cout << "\nLet's prepare a croissant!"<<std::endl;
    Croissant* croissant = new Croissant();
    croissant->Prepare();
    croissant->BumpUp(6);
    
    oven->InsertDough(croissant);
    oven->Cook(220, 8);
    croissant->Fill("chocolate");

    std::cout << "\nPhef! What a work, let's turn off the oven!"<<std::endl;
    oven->TurnOff();

    delete oven;
    delete bread;
    delete pizza;
    delete croissant;
    return 0;
}
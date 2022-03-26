#include"headers/ProductA.hpp"

ProductA::ProductA(std::string name, bool deluxe) : Product(name)
{
    this->deluxe=deluxe;
}

void ProductA::Use()
{
    if(deluxe)
    {
        std::cout << "This is a deluxe ProductA " << this->name << ".\n" << std::endl;
    }
    else
    {
        std::cout << "This is a poor ProductA " << this->name << ".\n" << std::endl;
    }
}
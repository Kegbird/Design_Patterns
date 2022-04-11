#include"headers/ProductB.hpp"

ProductB::ProductB(std::string name, bool deluxe) : Product(name)
{
    this->deluxe=deluxe;
}

void ProductB::Use()
{
if(deluxe)
    {
        std::cout << "This is a deluxe ProductB " << this->name << ".\n" << std::endl;
    }
    else
    {
        std::cout << "This is a poor ProductB " << this->name << ".\n" << std::endl;
    }
}
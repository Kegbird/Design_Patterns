#include"headers/ProductC.hpp"

ProductC::ProductC(std::string name, bool deluxe) : Product(name)
{
    this->deluxe=deluxe;
}

void ProductC::Use()
{
    if(deluxe)
    {
        std::cout << "This is a deluxe ProductC " << this->name << ".\n" << std::endl;
    }
    else
    {
        std::cout << "This is a poor ProductC " << this->name << ".\n" << std::endl;
    }
}
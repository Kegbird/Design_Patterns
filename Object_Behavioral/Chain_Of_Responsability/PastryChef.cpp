#include "headers/PastryChef.hpp"

PastryChef::PastryChef(const Chain* successor) : Chain(successor)
{}

void PastryChef::Handle(Request request) const
{
    switch (request)
    {
        case DESSERT:
        {
            std::cout << "PastryChef: The cake will arrive in a moment!" << std::endl;
            break;
        }
        default:
        {
            std::cout << "PastryChef: Sorry, I can't cook that!" << std::endl;
            break;
        }
    }
}

bool PastryChef::CheckSuccessor() const
{
    if(Chain::successor != nullptr)
        return true;
    return false;
}
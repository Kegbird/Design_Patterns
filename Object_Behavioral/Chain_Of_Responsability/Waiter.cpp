#include "headers/Waiter.hpp"

Waiter::Waiter(const Chain* successor) : Chain(successor)
{}

void Waiter::Handle(Request request) const
{
    switch (request)
    {
        case BILL:
        {
            std::cout << "Waiter: Sure, I'll bring You the bill in a moment!"<< std::endl;
            break;
        }
        case DRINK:
        {
            std::cout << "Waiter: Sure, the drink will arrive soon!"<< std::endl;
            break;
        }
        case WINE:
        {
            std::cout << "Waiter: Red or White?"<< std::endl;
            break;
        }
        default:
        {
            if(CheckSuccessor())
            {
                std::cout << "Waiter: Ok, let me ask to our chef!" << std::endl;
                successor->Handle(request);
            }
            else
            {
                std::cout << "Waiter: Sorry, We don't serve this!" << std::endl;
            }
            break;
        }
    }
}

bool Waiter::CheckSuccessor() const
{
    if(Chain::successor != nullptr)
        return true;
    return false;
}
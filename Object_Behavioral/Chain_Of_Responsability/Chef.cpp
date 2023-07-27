#include "headers/Chef.hpp"

Chef::Chef(const Chain* successor) : Chain(successor)
{}

void Chef::Handle(Request request) const
{
    switch (request)
    {
        case APPETIZER: case MEAL:
        {
            std::cout << "Chef: Sure, I'm turning on my oven!"<< std::endl;
            break;
        }
        case DESSERT:
        {
            if(CheckSuccessor())
            {
                std::cout << "Chef: Ok, let me ask to our pastry chef!" << std::endl;
                successor->Handle(request);
            }
            else
            {
                std::cout << "Chef: Sorry, I can't cook that!" << std::endl;
            }
        }
    }
}

bool Chef::CheckSuccessor() const
{
    if(Chain::successor != nullptr)
        return true;
    return false;
}
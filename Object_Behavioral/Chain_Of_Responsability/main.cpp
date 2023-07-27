#include <memory>
#include "headers/PastryChef.hpp"
#include "headers/Chef.hpp"
#include "headers/Waiter.hpp"


int main(int argc, char* argv[])
{
    std::cout<<"\nChain of responsability pattern stupid example\n"<<std::endl;

    std::cout<<"Waiter: Hello there good Sirs, what May I bring you?"<<std::endl;
    Chain* pastry_chef = new PastryChef();
    Chain* chef = new Chef(pastry_chef);
    std::unique_ptr<Waiter> waiter = std::unique_ptr<Waiter>(new Waiter(chef));
    std::cout<<"Sirs: Hello, may You bring us some wine?"<<std::endl;
    waiter->Handle(WINE);
    std::cout<<"Sirs: This red one on the menu and after that this drink."<<std::endl;
    waiter->Handle(DRINK);

    std::cout<<"\nSome times later...\n"<<std::endl;

    std::cout<<"Sirs: We would like to taste this appetizer."<<std::endl;
    waiter->Handle(APPETIZER);

    std::cout<<"\nSome times later...\n"<<std::endl;
    
    std::cout<<"Sirs: This sweet looks like yummy! We are ordering it now!"<<std::endl;
    waiter->Handle(DESSERT);
    
    std::cout<<"\nSome times later...\n"<<std::endl;

    std::cout<<"Sirs: Everything was delicious. The bill please."<<std::endl;
    waiter->Handle(BILL);

    return 0;
}
#include"headers/PersonBuilder.hpp"

int main(int argc, const char * argv[])
{
    std::cout<<"\nBuilder pattern stupid example\n"<<std::endl;
    PersonBuilder* builder = new PersonBuilder();

    Person* nerd = builder->BuildNerd("Morty", 17);
    Person* ninja = builder->BuildNinja("Genji", 32);
    Person* warrior = builder->BuildWarrior("Aatrox", 400);
    Person* bully = builder->BuildBully("Jackson", 15);
    std::cout << "Print nerd description\n" << std::endl;
    nerd->Describe();
    std::cout << "Print ninja description\n" << std::endl;
    ninja->Describe();
    std::cout << "Print warrior description\n" << std::endl;
    warrior->Describe();
    std::cout << "Print bully description\n" << std::endl;
    bully->Describe();

    return 0;
}
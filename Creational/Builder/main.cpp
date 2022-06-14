#include"headers/PersonBuilder.hpp"

int main(int argc, const char * argv[])
{
    std::cout<<"\nBuilder pattern stupid example"<<std::endl;
    PersonBuilder* builder = new PersonBuilder();

    builder->SetName("Morty");
    builder->SetAge(15);
    builder->SetKnowledge(14);
    builder->SetSpeed(40);
    builder->SetStrength(5);
    builder->SetHeight(2);
    Person* morty = builder->Build();
    morty->Describe();

    builder->SetName("Rick");
    builder->SetAge(56);
    builder->SetKnowledge(999);
    builder->SetSpeed(20);
    builder->SetStrength(40);
    builder->SetHeight(2);
    Person* rick = builder->Build();
    rick->Describe();

    return 0;
}
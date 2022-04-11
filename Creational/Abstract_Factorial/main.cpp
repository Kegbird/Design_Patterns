#include"headers/Factory.hpp"
#include"headers/PoorFactory.hpp"
#include"headers/RichFactory.hpp"

int main(int argc, const char * argv[])
{
    std::cout<<"\nAbstract factory pattern stupid example\n"<<std::endl;
    Factory* factory = new Factory();
    PoorFactory* poor_factory = new PoorFactory();
    RichFactory* rich_factory = new RichFactory();

    Product* a;
    Product* b;
    Product* c;

    a=factory->CreateProductA(poor_factory);
    b=factory->CreateProductB(poor_factory);
    c=factory->CreateProductC(poor_factory);

    a->Use();
    b->Use();
    c->Use();

    a=factory->CreateProductA(rich_factory);
    b=factory->CreateProductB(rich_factory);
    c=factory->CreateProductC(rich_factory);

    a->Use();
    b->Use();
    c->Use();

    return 0;
}
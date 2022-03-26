#include"headers/PoorFactory.hpp"
#include"headers/RichFactory.hpp"

int main(int argc, const char * argv[])
{
    std::cout<<"\nAbstract factory pattern stupid example\n"<<std::endl;
    PoorFactory* poor_factory = new PoorFactory();
    RichFactory* rich_factory = new RichFactory();

    Product* a;
    Product* b;
    Product* c;

    a=poor_factory->CreateProductA();
    b=poor_factory->CreateProductB();
    c=poor_factory->CreateProductC();

    a->Use();
    b->Use();
    c->Use();

    a=rich_factory->CreateProductA();
    b=rich_factory->CreateProductB();
    c=rich_factory->CreateProductC();

    a->Use();
    b->Use();
    c->Use();

    return 0;
}
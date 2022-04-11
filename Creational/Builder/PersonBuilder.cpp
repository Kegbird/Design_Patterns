#include"headers/PersonBuilder.hpp"

PersonBuilder::PersonBuilder()
{
    srand(time(NULL));
}

Person* PersonBuilder::BuildBully(std::string name, int age)
{
    //A bully is by default high, dumb, strong and fast.
    int strength=(rand()%6)+5;
    int height=(rand()%4)+7;
    int knowledge=0;
    int speed=(rand()%6)+5;
    Person* bully = new Person(name, age, strength, height, knowledge, speed);
    return bully;
}

Person* PersonBuilder::BuildWarrior(std::string name, int age)
{
    //A warrior is bu default  tall, strong, fast, but not really smart.
    int strength=(rand()%11)+10;
    int height=(rand()%11)+10;
    int knowledge=rand()%6;
    int speed=(rand()%11)+10;
    Person* warrior = new Person(name, age, strength, height, knowledge, speed);
    return warrior;
}

Person* PersonBuilder::BuildNinja(std::string name, int age)
{
    //A ninja is by default small, smart, very fast, and strong.
    int strength=(rand()%11)+10;
    int height=(rand()%4)+2;
    int knowledge=(rand()%11)+10;
    int speed=999;
    Person* ninja = new Person(name, age, strength, height, knowledge, speed);
    return ninja;
}

Person* PersonBuilder::BuildNerd(std::string name, int age)
{
    //A nerd is by default very smart, small, weak and slow.
    int strength=0;
    int height=(rand()%4)+2;
    int knowledge=999;
    int speed=0;
    Person* nerd = new Person(name, age, strength, height, knowledge, speed);
    return nerd;
}
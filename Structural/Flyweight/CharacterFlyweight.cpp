#include "headers/CharacterFlyweight.hpp"

CharacterFlyweight::CharacterFlyweight(char* character, short* color)
{
    this->character = character;
    this->color = color;
}

void CharacterFlyweight::Render()
{
    std::cout<<"\033[;"<<std::to_string(*color)<<"m"<<*character<<"\033[0m"<<std::flush;
}

CharacterFlyweight::~CharacterFlyweight()
{
}
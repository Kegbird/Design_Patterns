#include "headers/CharacterFactory.hpp"

CharacterFactory* CharacterFactory::instance= nullptr;

CharacterFactory::CharacterFactory()
{
    character_instances = std::map<char, char>();
    color_instances = std::map<ColorsEnum, short>();
    
    short red = 31;
    short green = 32;
    short blue = 34;
    short white = 37;
    short yellow = 33;
    short black = 30;
    short magenta = 35;

    color_instances.insert(std::pair<ColorsEnum, short>(Red, red));
    color_instances.insert(std::pair<ColorsEnum, short>(Green, green));
    color_instances.insert(std::pair<ColorsEnum, short>(Blue, blue));
    color_instances.insert(std::pair<ColorsEnum, short>(White, white));
    color_instances.insert(std::pair<ColorsEnum, short>(Yellow, yellow));
    color_instances.insert(std::pair<ColorsEnum, short>(Black, black));
    color_instances.insert(std::pair<ColorsEnum, short>(Magenta, magenta));

    for(int i='a'; i<='z'; i++)
    {
        character_instances.insert(std::pair<char, char>((char)i, (char)i));
    }

    for(int i='A'; i<='Z'; i++)
    {
        character_instances.insert(std::pair<char, char>((char)i, (char)i));
    }
}

std::unique_ptr<Flyweight> CharacterFactory::GetColoredCharacter(char character, ColorsEnum color)
{
    if(character_instances.find(character)==character_instances.end())
    {
        character_instances.insert(std::pair<char, char>(character, character));
    }
    return std::unique_ptr<Flyweight>(new CharacterFlyweight(&character_instances[character], &color_instances[color]));
}

CharacterFactory* CharacterFactory::GetInstance()
{
    if(instance==nullptr)
        instance = new CharacterFactory();
    return instance;
}

void CharacterFactory::Delete()
{
    delete CharacterFactory::instance;
    CharacterFactory::instance = nullptr;
}
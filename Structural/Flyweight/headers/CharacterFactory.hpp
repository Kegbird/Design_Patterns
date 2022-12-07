#pragma once
#include <map>
#include <vector>
#include <memory>
#include "Flyweight.hpp"
#include "CharacterFlyweight.hpp"
#include "ColorsEnum.hpp"


class CharacterFactory
{
    public:
        CharacterFactory(CharacterFactory &other) = delete;
        void operator=(const CharacterFactory &) = delete;
        static CharacterFactory* GetInstance();
        std::unique_ptr<Flyweight> GetColoredCharacter(char character, ColorsEnum color);
        void Delete();
    private:
        CharacterFactory();
        static CharacterFactory* instance;
        std::map<char, char> character_instances;
        std::map<ColorsEnum, short> color_instances;
};
#include "headers/CharacterFactory.hpp"

int main(int argc, char* argv[])
{
    std::cout<<"\nFlyweight pattern stupid example\n"<<std::endl;
    std::cout<<"We all like colors, so let's print some colored letters!"<<std::endl<<std::endl;

    CharacterFactory* character_factory = CharacterFactory::GetInstance();
    std::unique_ptr<Flyweight> A = character_factory->GetColoredCharacter('A', Red);
    A->Render();
    std::cout<<std::endl;
    std::unique_ptr<Flyweight> B = character_factory->GetColoredCharacter('B', Green);
    B->Render();
    std::cout<<std::endl;
    std::unique_ptr<Flyweight> C = character_factory->GetColoredCharacter('C', Blue);
    C->Render();
    std::cout<<std::endl<<std::endl;
    std::cout<<"Now let's create the most famous sentence of all times!"<<std::endl<<std::endl;

    std::unique_ptr<Flyweight> sentence[12] = {
        character_factory->GetColoredCharacter('H', Red),
        character_factory->GetColoredCharacter('e', Green),
        character_factory->GetColoredCharacter('l', Blue),
        character_factory->GetColoredCharacter('l', Yellow),
        character_factory->GetColoredCharacter('o', Magenta),
        character_factory->GetColoredCharacter(' ', Black),
        character_factory->GetColoredCharacter('W', White),
        character_factory->GetColoredCharacter('o', Red),
        character_factory->GetColoredCharacter('r', Green),
        character_factory->GetColoredCharacter('l', Blue),
        character_factory->GetColoredCharacter('d', Red),
        character_factory->GetColoredCharacter('!', Yellow)
    };

    sentence[0]->Render();
    sentence[1]->Render();
    sentence[2]->Render();
    sentence[3]->Render();
    sentence[4]->Render();
    sentence[5]->Render();
    sentence[6]->Render();
    sentence[7]->Render();
    sentence[8]->Render();
    sentence[9]->Render();
    sentence[10]->Render();
    sentence[11]->Render();
    std::cout<<std::endl<<std::endl;

    character_factory->Delete();
    return 0;
}
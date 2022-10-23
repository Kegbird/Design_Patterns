#include "headers/Logger.hpp"

int main(int argc, const char* argv[])
{
    std::cout<<"\nSingleton pattern stupid example\n"<<std::endl;
    std::cout<<"Let's try this awesome logger!"<<std::endl;
    Logger* logger = Logger::GetInstance();
    logger->Log("LOG: Useless log!");
    logger->Delete();
    return 0;
}
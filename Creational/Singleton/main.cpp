#include "headers/Logger.h"

int main(int argc, const char* argv[])
{
    std::cout<<"\nSingleton pattern stupid example\n"<<std::endl;
    Logger* logger = Logger::GetInstance();
    logger->Log("LOG: Useless log!");
    delete logger;
}
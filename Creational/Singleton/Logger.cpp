#include"headers/Logger.hpp"

Logger* Logger::instance= nullptr;

Logger::Logger() 
{
    std::cout<< "Logger created!" << std::endl;
}

Logger *Logger::GetInstance()
{
    if(instance==nullptr){
        instance = new Logger();
    }
    return instance;
}

void Logger::Log(std::string message)
{
    std::cout<<message<<std::endl;
}
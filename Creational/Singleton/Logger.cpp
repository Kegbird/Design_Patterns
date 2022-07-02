#include"headers/Logger.h"

Logger* Logger::instance= nullptr;

Logger::Logger() {};

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
#include"headers/EnhancedLogger.hpp"

EnhancedLogger* EnhancedLogger::instance= nullptr;

EnhancedLogger::EnhancedLogger() 
{
    std::cout << "EnhancedLogger created!" << std::endl;
}

EnhancedLogger::~EnhancedLogger()
{
    delete Logger::instance;
}

EnhancedLogger *EnhancedLogger::GetInstance()
{
    if(instance==nullptr){
        instance = new EnhancedLogger();
    }
    return instance;
}

void EnhancedLogger::Log(std::string message)
{
    auto clock_time = std::chrono::system_clock::now();
    std::time_t system_time = std::chrono::system_clock::to_time_t(clock_time);
    std::cout<< "Log at: "<<std::ctime(&system_time);
    std::cout<<message<<std::endl;
    std::cout<< "End Log" << std::endl;
}
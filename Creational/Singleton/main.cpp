#include "headers/Logger.hpp"
#include "headers/EnhancedLogger.hpp"

int main(int argc, const char* argv[])
{
    std::cout<<"\nSingleton pattern stupid example\n"<<std::endl;
    Logger* logger = Logger::GetInstance();
    logger->Log("LOG: Useless log!");
    delete logger;
    Logger* enahnced_logger = EnhancedLogger::GetInstance();
    enahnced_logger->Log("LOG 2: Useless log!");
    delete enahnced_logger;
}
#include "headers/Logger.hpp"
#include "headers/SuperLogger.hpp"

int main(int argc, char* argv[])
{
    std::string message = "Useful log information (asd)";
    std::cout<<"\nDecorator pattern stupid example\n"<<std::endl;
    std::cout<<"This is a default logger: nothing special!"<<std::endl;

    Logger* logger = new Logger();
    logger->LogMessage(message);

    std::cout<<"\nWe can enhance this logger!\n"<<std::endl;

    SuperLogger* super_logger = new SuperLogger(logger);
    super_logger->LogMessageWithTimestamp(message);
    super_logger->LogMessageWithLogLevel(message, INFO);
    delete super_logger;
    delete logger;
    return 0;
}
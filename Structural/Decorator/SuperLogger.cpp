#include "headers/SuperLogger.hpp"

SuperLogger::SuperLogger(Log* logger)
{
    this->logger=logger;
}

void SuperLogger::LogMessage(std::string message)
{
    this->logger->LogMessage(message);
}

void SuperLogger::LogMessageWithTimestamp(std::string message)
{
    time_t timestamp = time(0);
    std::string timestamp_string(std::ctime(&timestamp));
    timestamp_string.pop_back();
    message = timestamp_string+": "+message;
    logger->LogMessage(message);
}

void SuperLogger::LogMessageWithLogLevel(std::string message, LogLevel log_level)
{
    message=LogLevelToString(log_level)+": "+message;
    logger->LogMessage(message);
}
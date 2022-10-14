#pragma once
#include "Log.hpp"
#include "LogLevel.hpp"
#include <chrono>
#include <ctime>    

class SuperLogger : Log
{
    public:
        SuperLogger(Log* logger);
        void LogMessage(std::string message);
        void LogMessageWithTimestamp(std::string message);
        void LogMessageWithLogLevel(std::string message, LogLevel log_level);
    private:
        Log* logger;
};
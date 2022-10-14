#pragma once
#include "Log.hpp"

class Logger : public Log
{
    public:
        void LogMessage(std::string message);
};
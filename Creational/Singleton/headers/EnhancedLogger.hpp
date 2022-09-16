#pragma once
#include "Logger.hpp"

class EnhancedLogger : public Logger
{
private:
    EnhancedLogger();
    static EnhancedLogger* instance;
public:
    static EnhancedLogger* GetInstance();
    void virtual Log(std::string message);
    ~EnhancedLogger();
};
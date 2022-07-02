#pragma once
#include<iostream>
#include<string>

class Logger
{
friend class EnhancedLogger;
private:
    Logger();
    static Logger* instance;
public:
    Logger(Logger &other) = delete;
    void operator=(const Logger &) = delete;
    void virtual Log(std::string message);
    static Logger *GetInstance();
};
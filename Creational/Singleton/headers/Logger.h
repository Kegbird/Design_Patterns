#pragma once
#include<iostream>
#include<string>

class Logger
{
private:
    Logger();
    static Logger* instance;
public:
    Logger(Logger &other) = delete;
    void operator=(const Logger &) = delete;
    void Log(std::string message);
    static Logger *GetInstance();
};
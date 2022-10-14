#pragma once
#include<string>
#include<iostream>

class Log
{
    public:
        virtual void LogMessage(std::string message) = 0;
};
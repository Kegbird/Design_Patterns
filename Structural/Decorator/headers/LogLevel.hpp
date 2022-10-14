#pragma once
#include<string>

enum LogLevel {
    INFO,
    NORMAL,
    WARNING,
    ERROR
};

inline std::string LogLevelToString(LogLevel level)
{
    switch (level)
    {
        case INFO:   return "-- INFO -- ";
        case NORMAL:   return "-- NORMAL -- ";
        case WARNING:   return "-- WARNING -- ";
        default:      return "-- ERROR  -- ";
    }
}
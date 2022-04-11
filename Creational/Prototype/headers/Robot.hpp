#pragma once
#include<iostream>
#include<string>
#include "Configuration.hpp"

class Robot {
    public:
        Robot();
        Robot(std::string name);
        void SetConfiguration(Configuration* configuration);
        void ExecuteConfiguration();
    private:
        std::string name;
        Configuration* configuration;
};
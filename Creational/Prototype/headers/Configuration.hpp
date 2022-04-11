#pragma once
#include<iostream>
#include<string>

class Configuration {
    public:
        Configuration();
        Configuration(std::string configuration);
        void ExecuteConfiguration();
        Configuration* Clone();
    private:
        Configuration(Configuration* configuration);
        std::string output;
};
#pragma once
#include "Configuration.hpp"

class ConfigurationPrototypeFactory
{
    public:
        ConfigurationPrototypeFactory();
        Configuration* CreateConfigurationA();
        Configuration* CreateConfigurationB();
        Configuration* CreateConfigurationC();
    private:
        Configuration* configurationAPrototype;
        Configuration* configurationBPrototype;
        Configuration* configurationCPrototype;
};
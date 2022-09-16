#include "headers/ConfigurationPrototypeFactory.hpp"

ConfigurationPrototypeFactory::ConfigurationPrototypeFactory()
{
    this->configurationAPrototype=new Configuration("Voice-Output: I like apples.");
    this->configurationBPrototype=new Configuration("*** Moving right arm of 90 degrees ***");
    this->configurationCPrototype=new Configuration("*** Moving left arm of -90 degrees ***");
}

Configuration* ConfigurationPrototypeFactory::CreateConfigurationA()
{
    return this->configurationAPrototype->Clone();
}

Configuration* ConfigurationPrototypeFactory::CreateConfigurationB()
{
    return this->configurationBPrototype->Clone();
}

Configuration* ConfigurationPrototypeFactory::CreateConfigurationC()
{
    return this->configurationCPrototype->Clone();
}
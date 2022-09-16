#include "headers/Configuration.hpp"

Configuration::Configuration()
{
    this->output="*** No configuration ***";
}

Configuration::Configuration(std::string configuration)
{
    this->output=configuration;
}

Configuration::Configuration(Configuration* configuration)
{
    this->output = configuration->output;
}

void Configuration::ExecuteConfiguration()
{
    std::cout << output << std::endl;
}

Configuration* Configuration::Clone()
{
    return new Configuration(*this);
}
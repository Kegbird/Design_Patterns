#include "headers/Robot.hpp"
#include "headers/ConfigurationPrototypeFactory.hpp"

int main(int argc, const char* argv[])
{
    std::cout<<"\nPrototype pattern stupid example\n"<<std::endl;
    ConfigurationPrototypeFactory* configurationFactory = new ConfigurationPrototypeFactory();
    Configuration* configuration = configurationFactory->CreateConfigurationA();

    Robot* robot = new Robot("Wall-E");
    robot->SetConfiguration(configuration);
    robot->ExecuteConfiguration();

    configuration=configurationFactory->CreateConfigurationB();
    robot->SetConfiguration(configuration);
    robot->ExecuteConfiguration();

    configuration=configurationFactory->CreateConfigurationC();
    robot->SetConfiguration(configuration);
    robot->ExecuteConfiguration();
}
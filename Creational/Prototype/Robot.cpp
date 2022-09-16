#include "headers/Robot.hpp"

Robot::Robot()
{
    this->name="Unknown robot";
    this->configuration=new Configuration();
}

Robot::Robot(std::string name)
{
    this->name=name;
    this->configuration=new Configuration();
}

void Robot::SetConfiguration(Configuration* configuration)
{
    this->configuration=configuration;
}

void Robot::ExecuteConfiguration()
{
    std::cout << this->name << " executes its configuration." << std::endl;
    this->configuration->ExecuteConfiguration();
    std::cout << "Task completed" << std::endl;
}
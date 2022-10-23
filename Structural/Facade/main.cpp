#include<string>
#include<iostream>
#include "headers/Calculator.hpp"

int main(int argc, char* argv[])
{
    std::cout<<"\nFacade pattern stupid example\n"<<std::endl;
    std::cout<<"Alright, let's do some calculus!"<<std::endl;
    Calculator* calculator = Calculator::GetInstance();
    std::cout<<"1 + 1 = " <<std::to_string(calculator->Sum(1, 1))<<std::endl;
    std::cout<<"1 - 1 = " <<std::to_string(calculator->Subtract(1, 1))<<std::endl;
    std::cout<<"2 * 2 = " <<std::to_string(calculator->Multiply(2, 2))<<std::endl;
    std::cout<<"4 / 2 = " <<std::to_string(calculator->Divide(4, 2))<<std::endl;
    std::cout<<"Phew, that's too much for today!"<<std::endl;
    calculator->Delete();
    return 0;
}
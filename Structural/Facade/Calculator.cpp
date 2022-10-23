#include "headers/Calculator.hpp"

Calculator* Calculator::instance= nullptr;

Calculator::Calculator()
{
    std::cout<<"Beep-boop... The calculator is ready!"<<std::endl;
}

void Calculator::Delete()
{
    std::cout<<"Boop-boop... The calculator is no more!"<<std::endl;
    delete Calculator::instance;
    instance = nullptr;
}

Calculator* Calculator::GetInstance()
{
    if(instance==nullptr)
        instance = new Calculator();
    return instance;
}

float Calculator::Sum(float first, float second)
{
    SumOperator sum;
    return sum.ExecuteSum(first, second);
}

float Calculator::Multiply(float first, float second)
{
    MultiplicationOperator mul;
    return mul.ExecuteMultiplication(first, second);
}


float Calculator::Subtract(float first, float second)
{
    SubtractionOperator sub;
    return sub.ExecuteSubtraction(first, second);
}

float Calculator::Divide(float first, float second)
{
    DivisionOperator div;
    return div.ExecuteDivision(first, second);
}
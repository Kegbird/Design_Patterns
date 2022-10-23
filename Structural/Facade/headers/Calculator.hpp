#pragma once
#include<iostream>
#include<string>
#include "SumOperator.hpp"
#include "SubtractionOperator.hpp"
#include "MultiplicationOperator.hpp"
#include "DivisionOperator.hpp"

class Calculator
{
    public:
        Calculator(Calculator &other) = delete;
        void operator=(const Calculator &) = delete;
        static Calculator* GetInstance();
        float Sum(float first, float second);
        float Multiply(float first, float second);
        float Subtract(float first, float second);
        float Divide(float first, float second);
        void Delete();
    private:
        Calculator();
        static Calculator* instance;
};
#include "headers/DivisionOperator.hpp"

float DivisionOperator::ExecuteDivision(float first, float second)
{
    if(second==0)
        return first;
    return first/second;
}
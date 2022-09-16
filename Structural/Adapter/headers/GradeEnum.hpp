#pragma once

enum GradeEnum {
    Commander,
    Lieutenant,
    Police_Officer,
};

inline const char* GradeToString(GradeEnum grade)
{
    switch (grade)
    {
        case Commander:   return "Commander";
        case Lieutenant:   return "Lieutenant";
        default:      return "Police Officer";
    }
}

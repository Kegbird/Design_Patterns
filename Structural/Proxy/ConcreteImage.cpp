#include "headers/ConcreteImage.hpp"

ConcreteImage::ConcreteImage(int image_index)
{
    switch (image_index)
    {
        case 0:
            image = "  ******  \n  *    *  \n  *    *  \n  *    *  \n  *    *  \n  ******  \n";
            break;
        case 1:
            image = "    *    \n   ***   \n  *****  \n    *    \n    *    \n";
            break;
        case 2:
            image = "    *    \n   * *   \n  *   *  \n   * *   \n    *    \n";
            break;
        default:
            image = " **  *  ** \n  *******  \n   *****   \n    ***    \n   *   *   \n";
            break;
    }
}

void ConcreteImage::Draw()
{
    std::cout<<image<<std::endl;
}
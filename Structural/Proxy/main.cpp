#include "headers/ImageProxy.hpp"

int main(int argc, char* argv[])
{
    std::cout<<"\nProxy pattern stupid example\n"<<std::endl;
    std::unique_ptr<ImageProxy> square = std::unique_ptr<ImageProxy>(new ImageProxy(0));
    std::unique_ptr<ImageProxy> tree = std::unique_ptr<ImageProxy>(new ImageProxy(1));
    std::unique_ptr<ImageProxy> rhombus = std::unique_ptr<ImageProxy>(new ImageProxy(2));
    std::unique_ptr<ImageProxy> star = std::unique_ptr<ImageProxy>(new ImageProxy(3));

    std::cout<<"Let's draw some images!\n"<<std::endl;

    square->Draw();
    tree->Draw();
    rhombus->Draw();
    star->Draw();

    return 0;
}
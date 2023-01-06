#include "headers/ImageProxy.hpp"

ImageProxy::ImageProxy(int image_index)
{
    this->image_index = image_index;
    concrete_image = nullptr;
}

void ImageProxy::Draw()
{
    if(concrete_image==nullptr)
        concrete_image = std::unique_ptr<ConcreteImage>(new ConcreteImage(image_index));
    concrete_image->Draw();
}
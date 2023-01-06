#pragma once
#include <memory>
#include "Image.hpp"
#include "ConcreteImage.hpp"

class ImageProxy : public Image
{
    public:
        ImageProxy(int image_index);
        void Draw();
    private:
        int image_index;
        std::unique_ptr<ConcreteImage> concrete_image;
};
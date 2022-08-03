#pragma once

class Dough
{
    public:
        virtual void Prepare() = 0;
        virtual void BumpUp(int hours) = 0;
        virtual void Cook(int degrees) = 0;
    protected:
        bool prepared;
        bool cooked;
        bool bumped_up;
};

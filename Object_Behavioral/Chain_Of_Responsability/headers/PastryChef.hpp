#pragma once
#include <iostream>
#include "Chain.hpp"

class PastryChef : public Chain
{
    public:
        PastryChef(const Chain* successor = nullptr);
        virtual void Handle(Request request) const;
        virtual bool CheckSuccessor() const;
};
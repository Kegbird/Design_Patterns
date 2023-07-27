#pragma once
#include <iostream>
#include "Chain.hpp"

class Waiter : public Chain
{
    public:
        Waiter(const Chain* successor = nullptr);
        virtual void Handle(Request request) const;
        virtual bool CheckSuccessor() const;
};
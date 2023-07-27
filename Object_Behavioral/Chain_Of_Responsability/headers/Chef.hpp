#pragma once
#include <iostream>
#include "Chain.hpp"

class Chef : public Chain
{
    public:
        Chef(const Chain* successor = nullptr);
        virtual void Handle(Request request) const;
        virtual bool CheckSuccessor() const;
};
#pragma once
#include "Request.hpp"

class Chain
{
    public:
        Chain(const Chain* _successor) : successor(_successor) {}
        virtual void Handle(Request request) const = 0;
        ~Chain() 
        {
            delete successor;
        }
    protected:
        virtual bool CheckSuccessor() const = 0;
        const Chain* successor;
};
#pragma once

#include <iostream>
#include "basePart.h"

// 
class AutoPart : public BasePart
{
    public:
        // Constructor
        AutoPart( int partNo, int partMaker, std::string partDescription );

        // Destructor
        ~AutoPart();

        // Member function
        void printPart();

    private:
        std::string m_partDescription{};
        int         m_partMaker      {};
};
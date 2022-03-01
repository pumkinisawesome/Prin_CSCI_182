#pragma once

#include <string>
#include <iostream>

class BasePart
{
    public:
        // Constructor
        BasePart( int partNo )
        {
            std::cout << "\tIn BasePart Constructor " << m_partNo << '\n';

            m_partNo = partNo;
        }

        // Destructor
        virtual ~BasePart()
        {
            std::cout << "\tIn BasePart Destructor " << m_partNo << '\n';
        }

        // Member function
        virtual void printPart() = 0;

        // Returns the part number of the object
        int getPartNo() { return m_partNo; }
        // Sets the part number of the object
        void setPartNo( int partNo ) { m_partNo = partNo; }
    


    private:
        int m_partNo{};
};
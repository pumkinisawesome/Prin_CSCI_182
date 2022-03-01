#include <iostream>
#include "autoPart.h"

// Constructor
AutoPart::AutoPart( int         t_partNo,
                    int         t_partMaker,
                    std::string t_partDescription )
                    : BasePart( t_partNo )
{
    std::cout << "\tIn AutoPart Constructor" << '\n';

    m_partMaker       = t_partMaker      ;
    m_partDescription = t_partDescription;
}

// Destructor
AutoPart::~AutoPart()
{
    std::cout << "\tIn AutoPart Destructor: " << m_partDescription << '\n';
}

// Print the part
void AutoPart::printPart()
{
    std::cout <<  m_partDescription         << '\n';
    std::cout << "Part no. " << getPartNo() << '\n';
    std::cout << "Maker:   " << m_partMaker << '\n';
}
#include <iostream>
#include "enginePart.h"

// Constructor
EnginePart::EnginePart( int         t_partNo,
                        int         t_partMaker,
                        std::string t_partDescription,
			            int         t_EngineSpecNo )
                        : AutoPart( t_partNo,
                                    t_partMaker,
                                    t_partDescription )
{
    std::cout << "\tIn EnginePart Constructor" << '\n';

    m_EngineSpecNo = t_EngineSpecNo;
}

// Destructor
EnginePart::~EnginePart()
{
    std::cout << "\tIn EnginePart Destructor" << '\n';
}
#include "seriesCircuit.h"
#include <iostream>

float SeriesCircuit::getResistance()
{
    float totalResistance{};

    // Add conductances together
    for (int i = 0; i < m_lenResistanceArray; i++)
    {
        totalResistance += m_pResistance[i];
    }
    
    // Convert conductance to resistance and return
    return totalResistance;
}

void SeriesCircuit::addResistance( float resistance )
{
    Circuit::addNewResistance( resistance );
}
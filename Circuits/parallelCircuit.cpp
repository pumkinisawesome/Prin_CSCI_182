#include "parallelCircuit.h"
#include <iostream>

float ParallelCircuit::getResistance()
{
    // Inverse of resistance
    float totalConductance{};

    // Add conductances together
    for (int i = 0; i < m_lenResistanceArray; i++)
    {
        totalConductance += 1 / m_pResistance[i];
    }
    
    // Convert conductance to resistance and return
    return 1 / totalConductance;
}

void ParallelCircuit::addResistance( float resistance )
{
    Circuit::addNewResistance( resistance );
}
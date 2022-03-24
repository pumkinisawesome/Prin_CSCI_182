#include "circuit.h"

Circuit::Circuit( float resistance )
{
    m_lenResistanceArray++;
    m_pResistance = new float[ m_lenResistanceArray ];
    m_pResistance[0] = resistance;
}

Circuit::~Circuit()
{
    if( m_pResistance != nullptr )
        delete[] m_pResistance;
}

void Circuit::addNewResistance( float resistance )
{
    float* pTemp = new float[ m_lenResistanceArray + 1 ];

    // Copy old arrray into new one
    for ( int i = 0; i < m_lenResistanceArray; i++ )
        pTemp[i] = m_pResistance[i];
    
    // Append resistance
    pTemp[ m_lenResistanceArray ] = resistance;
    m_lenResistanceArray++;

    // Reassign pointer to new array and delete old array
    delete[] m_pResistance;
    m_pResistance = pTemp;
}

#include "bubbleSort.h"

void BubbleSort::sort()
{
    // Temporary variables
    bool swapp{ true };
    int  tempSwapArea{ 0 };

    while ( swapp )
    {
        swapp = false;

        for ( int i { 0 }; i < m_mainVector.size() - 1; i++ )
        {
            if ( m_mainVector[ i ] > m_mainVector[ i + 1 ] )
            {
                // Do the swap
                tempSwapArea          = m_mainVector[ i ];
                m_mainVector[ i ]     = m_mainVector[ i + 1 ];
                m_mainVector[ i + 1 ] = tempSwapArea;
                swapp = true;
            }
        }
    }
}
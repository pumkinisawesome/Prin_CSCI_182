
#include "insertSort.h"

// void InsertSort::sort()
// {
//     // Temporary variables
//     int  tempSwapArea{ 0 };

//     for ( int i { 1 }; i < m_mainVector.size(); i++ )
//     {
//         for ( int j { i }; j > 0; j-- )
//         {
//             if ( m_mainVector[ j ] < m_mainVector[ j - 1 ] )
//             {
//                 // Do the swap
//                 tempSwapArea          = m_mainVector[ j ];
//                 m_mainVector[ j ]     = m_mainVector[ j - 1 ];
//                 m_mainVector[ j - 1 ] = tempSwapArea;
//             }
//         }
//     }
// }

void InsertSort::sort()
{
    int nLength = m_mainVector.size();
    int i, j, tmp;

    for ( i = 1; i < nLength; i++ )
    {
        j   = i;
        tmp = m_mainVector[ i ];

        while ( j > 0 && tmp < m_mainVector[ j - 1 ] )
        {
            m_mainVector[ j ] = m_mainVector[ j - 1 ];
            j--;
        }
    }
}
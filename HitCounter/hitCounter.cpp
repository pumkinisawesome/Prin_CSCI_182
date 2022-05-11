#include "hitCounter.h"

using namespace std;

void HitCounter::recordHit( int timeStamp )
{
   m_hits.push_back( timeStamp );
}

int HitCounter::total()
{
   return m_hits.size();
}

int HitCounter::range( int lower, int upper )
{
   int returnValue = 0;
   for ( int i = 0; i < m_hits.size(); i++ )
      if ( lower <= m_hits[i] && m_hits[i] <= upper )
         returnValue++;

   return returnValue;
}
#pragma once

#include <vector>

class HitCounter
{
   public:
      HitCounter () {};
      ~HitCounter() {};

      void recordHit( int timeStamp );    // Records a hit at the selected time stamp
      int  total();                       // Returns the total number of hits
      int  range( int lower, int upper ); // Returns the total hits in a given time frame

   private:
      std::vector<int> m_hits;
};

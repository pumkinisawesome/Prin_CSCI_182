#include <iostream>

#include "hitCounter.h"

using namespace std;

int main()
{
   HitCounter hitCounter;

   hitCounter.recordHit(10);
   hitCounter.recordHit(17);
   hitCounter.recordHit(22);
   hitCounter.recordHit(52);

   cout << "Total hits: " << hitCounter.total() << endl;

   hitCounter.recordHit(58);
   hitCounter.recordHit(104);

   cout << "Total hits: " << hitCounter.total() << endl;

   cout << "Hits between 22 and 58: " << hitCounter.range(22,58) << endl;
   cout << "Hits between 22 and 57: " << hitCounter.range(22,57) << endl;
   cout << "Hits between 23 and 57: " << hitCounter.range(23,57) << endl;

   return 0;
}
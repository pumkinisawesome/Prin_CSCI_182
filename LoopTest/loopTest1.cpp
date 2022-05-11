#include <iostream>

using namespace std;

// Define global constants
const int daysMax = 7;
const int weekMax = 7;

int main()
{
   for ( int i = 1; i <= weekMax; i++ )
   {
      cout << "Week " << i << endl;

      for ( int j = 1; j <= daysMax; j++ )
      {
         cout << "\tDay " << j << endl;
      }
   }

   return 0;
}
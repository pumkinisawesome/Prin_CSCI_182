#include <iostream>

using namespace std;

// Define global constants
const int rows = 5;
const int cols = 5;



int main()
{
   // Print top row
   for ( int i = 0; i < cols; i++ )
      cout << "* ";
   cout << endl;

   // Print middle rows
   for ( int i = 1; i < rows - 1; i++ )
   {
      cout << "* ";
      for ( int j = 1; j < cols - 1; j++ )
         cout << "x ";
      cout << "* " << endl;
   }
   // Print bottom row
   for ( int i = 0; i < cols; i++ )
      cout << "* ";
   cout << endl;

   return 0;
}
#include <iostream>

using namespace std;

int fib(int n)
{
   // Terminating case
   if ( n < 1 )
      return 0;
   if ( n == 1 )
      return 1;

   // Recursive case
   n = fib( n - 1 ) + fib( n - 2 );

   return n;
}

int main()
{
   for ( int i = 0; i < 47; i++ )
      cout << i << ":\t" << fib( i ) << endl;

   return 0;
}
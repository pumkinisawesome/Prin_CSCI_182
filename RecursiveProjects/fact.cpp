#include <iostream>

using namespace std;

int fib(int n)
{
   // Terminating case
   if ( n < 1 )
      return 1;
    
   // Recursive case
   n = n * fib( n - 1 );

   cout << n << " ";

   return n;
}

int main()
{
   cout << endl << fib(10) << endl;

   return 0;
}
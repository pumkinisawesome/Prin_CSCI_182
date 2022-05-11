#include <iostream>

using namespace std;

int fib(int n)
{
   // Terminating case
   if ( n < 1 )
      return 0;
    
   // Recursive case
   cout << n << " ";
   return fib(--n);
}

int main()
{
   cout << endl << fib(10) << endl;

   return 0;
}
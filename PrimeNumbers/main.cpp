#include <iostream>
#include <vector>

// Define constants
constexpr int MAX_PRIMES = 1000;

int main()
{
   std::vector<int> primeNumbers;

   for ( int i = 2; i < MAX_PRIMES; i++ )
   {
      bool isPrime = true;

      // Check if the number is prime
      for ( int j = 0; j < primeNumbers.size(); j++ )
      {
         if ( primeNumbers[j] * primeNumbers[j] > i )
            break;
         if ( i % primeNumbers[j] == 0 )
         {
            isPrime = false;
            break;
         }
      }
      // If it is prime, add it to the vector
      if ( isPrime )
      {
         primeNumbers.push_back( i );
      }
   }

   for ( int i = 0; i < primeNumbers.size(); i++ )
   {
      std::cout << primeNumbers[i] << std::endl;
   }
   
   return 0;
}
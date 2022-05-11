#include <iostream>

using namespace std;

// Function declarations
int predictFlip ( int coins );
int simulateFlip( int coins );

int main()
{
   // Ask for input
   cout << "Enter the number of coins: ";

   int coins;
   cin >> coins;

   // Call prediction function
   int predicted = predictFlip( coins );

   // Call simulation function
   int simulated = simulateFlip( coins );

   // Print results
   cout << "Predicted result: " << predicted << endl;
   cout << "Simulated result: " << simulated << endl;

   return 0;
}

// Function definitions
//  predictFlip function to calculate number of flips needed
int predictFlip( int coins )
{
   return log2( coins );
}

//  simulateFlip function to use 
int simulateFlip( int coins )
{
   int round = 0;
   while ( coins > 1 )
   {
      coins /= 2;
      round++;
   }
   return round;
}
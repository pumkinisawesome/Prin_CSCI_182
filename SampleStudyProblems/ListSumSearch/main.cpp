#include <iostream>
#include <vector>

using namespace std;

// Function declarations
bool findSum( int k, vector<int> inputVector )
{
   for ( int i = 0; i < inputVector.size(); i++ )
   {
      for ( int j = 0; j < inputVector.size(); j++ )
      {
         if ( i = j )
            continue;
         if ( inputVector[i] + inputVector[j] == k )
            return true;
      }
   }
   return false;
}

int main()
{
   vector<int> testVec { 10, 15, 3, 7 };



   return 0;
}
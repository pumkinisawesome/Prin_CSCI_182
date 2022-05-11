#include <iostream>

using namespace std;

bool isPalindrome( string str )
{
   // Get characters 
   char char1 = str[0];
   char char2 = str[str.length() - 1];
   
   // Base cases
   if ( str.length() == 0 )
      return false;
   if ( char1 != char2 )
      return false;
   
   else if ( str.length() < 3 )
      return true;
   
   // Recursive case
   else
   {
      string newStr;
      for ( int i = 1; i < str.length() - 1; i++ )
         newStr += str[i];
      return ( isPalindrome( newStr ) );
   }

}

int main()
{
   string strToTest;

   cout << "Enter a string: ";
   getline(cin, strToTest);

   cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
   cout << "The string you entered is:   " << strToTest << endl;

   // Remove spaces from the string
   strToTest.erase(std::remove_if(strToTest.begin(), strToTest.end(), ::isspace), strToTest.end());

   // Change all characters to lowercase
   transform(strToTest.begin(), strToTest.end(), strToTest.begin(), ::tolower);

   cout << "The string to be checked is: " << strToTest << endl;

   // Test if the string is a palindrome
   cout << "Thinking..." << endl;
   if ( isPalindrome( strToTest ) )
      cout << strToTest << " is a palindrome." << endl;
   else
      cout << strToTest << " is not a palindrome." << endl;

   return 0;
}
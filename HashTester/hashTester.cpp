#include <iostream>
#include <string>
#include <functional>

#include "hashTable.h"

using namespace std;

int main()
{
   HashTable table;
   string    cmd, key;
   Data     *val;

   while ( cin >> cmd )
   {
      if ( cmd == "add" )
      {
         val = new Data;
         cin >> val->lastName >> val->firstName >> val->gpa;
         if ( table.add( val->lastName, val ) )
            cout << "Added" << endl;
         else
         {
            cout << "Duplicate or no room" << endl;
            delete val;
         }
      }
      else if ( cmd == "find" )
      {
         cin >> key;
         val = table.find(key);
         if ( val == nullptr )
            cout << "Not present" << endl;
         else
            cout << val->lastName << " " << val->firstName << " " << val->gpa << endl;
      }
      else if ( cmd == "drop" )
      {
         cin >> key;
         cout << ( table.drop( key ) ? "Dropped" : "Not present" ) << endl;
      }
   }

   return 0;
}

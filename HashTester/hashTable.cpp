#include <iostream>
#include <string>
#include "hashTable.h"

using namespace std;

hash<string> HashTable::hasher;

HashTable::HashTable()
{
   // Initialize
   for ( int i = 0; i < SIZE; ++i )
      table[i] = nullptr;
}

int HashTable::add( string &key, Data *value )
{
   int homeIdx = hasher(key) % SIZE;
   int hashIdx = homeIdx;

   // int hashesChecked = 0;
   
   while ( table[hashIdx] != nullptr )
   {
      if ( table[hashIdx]->key == key )
         return 0;
      hashIdx = ( hashIdx + 1 ) % SIZE;

      if ( hashIdx == homeIdx )
         return 0;

      // hashesChecked++;

      // // If all hashes have been checked
      // if ( hashesChecked == SIZE )
      //    return 0;
   }
   cerr << "Home index: " << homeIdx << " Probed index: " << hashIdx << endl;

   value->key = key;
   table[hashIdx] = value;

   return 1;
}

Data *HashTable::find( const string &key )
{
   int homeIdx = hasher(key) % SIZE;
   int hashIdx = homeIdx;

   while ( table[hashIdx]->key != key )
   {
      hashIdx = ( hashIdx + 1 ) % SIZE;
      if ( hashIdx == homeIdx ) // Out of space
         return nullptr;
   }
   return table[hashIdx];
}

int HashTable::drop( const string &key )
{
   int homeIdx = hasher(key) % SIZE;
   int hashIdx = homeIdx;
   int rtn;

   while ( table[hashIdx] != nullptr && table[hashIdx]->key != key )
   {
      hashIdx = ( hashIdx + 1 ) % SIZE;
      if ( hashIdx == homeIdx ) // Not present
         return 0;
   }

   rtn = table[hashIdx]->key == key;

   table[hashIdx] = nullptr;

   return rtn;  // Finish
}

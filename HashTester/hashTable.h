#include <string>
#include <functional>

// Linear probing hash table of Data objects, keyed by string

struct Data
{
   std::string key;
   std::string lastName;
   std::string firstName;
   double      gpa;
};

class HashTable
{
   static const int SIZE = 5;

   Data *table[ SIZE ];

public:
   static std::hash<std::string> hasher;

   HashTable();

   int   add  (       std::string &key, Data *value );
   Data *find ( const std::string &key              );
   int   drop ( const std::string &key              );
};

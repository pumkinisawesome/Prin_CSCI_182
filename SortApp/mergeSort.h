#pragma once

#include "sortBase.h"

class mergeSort : public SortBase
{
private:
   void mergeSortIt(int array[], int const begin, int const end);
   void merge      (int array[], int const left , int const mid, int const right);

public:
   void sort();
};

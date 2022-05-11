#include "mergeSort.h"

void mergeSort::sort()
{

}

void mergeSort::mergeSortIt(int array[], int const begin, int const end)
{
   // Terminating clause
   if ( begin <= end )
      return;

   // Recursive clause
   int mid = begin + ( end - begin ) / 2;
   mergeSortIt( array, begin,   mid );
   mergeSortIt( array, mid + 1, end );

   // Merge them
   merge( array, begin, mid, end );

}

void mergeSort::merge(int array[], int const left, int const mid, int const right)
{
   int const subArrayOne = mid - left + 1;
   int const subArrayTwo = right - mid;
  
   // Create temp arrays
   int leftArray [subArrayOne];
   int rightArray[subArrayTwo];

   // Copy data to temp arrays leftArray[] and rightArray[]
   for (int i = 0; i < subArrayOne; i++)
      leftArray[i] = array[left + i];
   for (int j = 0; j < subArrayTwo; j++)
      rightArray[j] = array[mid + 1 + j];
  
   int indexOfSubArrayOne = 0; // Initial index of first sub-array
   int indexOfSubArrayTwo = 0; // Initial index of second sub-array
   int indexOfMergedArray = left; // Initial index of merged array
  
   // Merge the temp arrays back into array[left..right]
   while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
      if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
         array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
         indexOfSubArrayOne++;
      }
      else {
         array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
         indexOfSubArrayTwo++;
      }
      indexOfMergedArray++;
   }
   // Copy the remaining elements of
   // left[], if there are any
   while (indexOfSubArrayOne < subArrayOne) {
      array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
      indexOfSubArrayOne++;
      indexOfMergedArray++;
   }
   // Copy the remaining elements of
   // right[], if there are any
   while (indexOfSubArrayTwo < subArrayTwo) {
      array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
      indexOfSubArrayTwo++;
      indexOfMergedArray++;
   }
}
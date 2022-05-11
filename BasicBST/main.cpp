#include <iostream>

#include "treeNode.h"
#include "binarySearchTree.h"

using namespace std;

int main()
{
   BinarySearchTree bst;

   bst.addItem(16);
   bst.addItem(21);
   bst.addItem(81);
   bst.addItem(10);
   bst.addItem(8);
   bst.addItem(44);
   bst.addItem(15);

   bst.printInOrder();


   return 0;
}
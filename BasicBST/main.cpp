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
   cout << endl;
   bst.printPreOrder();
   cout << endl;
   bst.printPostOrder();

   // Second bst which acts like a linked list
   BinarySearchTree anotherBst;

   anotherBst.addItem(8);
   anotherBst.addItem(10);
   anotherBst.addItem(15);
   anotherBst.addItem(16);
   anotherBst.addItem(21);
   anotherBst.addItem(44);
   anotherBst.addItem(81);

   // Test tree search
   bst.PrintFindItem(16);
   bst.PrintFindItem(17);



   return 0;
}
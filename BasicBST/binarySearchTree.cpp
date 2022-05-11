#include <iomanip>
#include <math.h>

#include "binarySearchTree.h"

using namespace std;

void BinarySearchTree::addItem( int newItem )
{
   currentDepth = 0;

   if ( !root )
      root = insert( this->root, newItem );
   else
      insert( this->root, newItem );
   
   // Calculate a new max depth if it's available
   maxDepth = fmax( maxDepth, currentDepth );
}

TreeNode* BinarySearchTree::insert( TreeNode* currentNode, int value )
{
   if ( !currentNode )
      return new TreeNode( value );
   
   // Increment my current Depth
   currentDepth++;

   // if value is > root data, process right, else left
   if ( value > currentNode->data )
      currentNode->right = insert( currentNode->right, value );
   else
      currentNode->left  = insert( currentNode->left,  value );


   return currentNode;
}

void BinarySearchTree::inOrder( TreeNode* currentNode )
{
   if ( !currentNode )
      return;
   
   inOrder( currentNode->left );
   cout <<  currentNode->data << endl;
   inOrder( currentNode->right );
}

// void BinarySearchTree::prettyPrint()
// {
//  int i= 0;
//    while (i <= maxDepth){
//       printlv(i);
//       i++;
//    cout << endl;
//    }
// }
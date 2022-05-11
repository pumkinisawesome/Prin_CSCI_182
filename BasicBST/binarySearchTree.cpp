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

void BinarySearchTree::findItem ( TreeNode* currentNode, int dataToFind )
{
   // Terminating cases
   if ( !currentNode )
      return;

   if ( currentNode->data == dataToFind )
   {
      cout << "Found" << endl;
      return;
   }

   // Recursive case
   if ( dataToFind > currentNode->data )
      findItem( currentNode->right, dataToFind );
   else
      findItem( currentNode->left,  dataToFind );

   if ( currentNode == root )
      cout << "Not Found" << endl;
}

void BinarySearchTree::inOrder( TreeNode* currentNode )
{
   if ( !currentNode )
      return;
   
   inOrder( currentNode->left );
   cout <<  currentNode->data << endl;
   inOrder( currentNode->right );
}

void BinarySearchTree::preOrder( TreeNode* currentNode )
{
   if ( !currentNode )
      return;
   
   cout <<  currentNode->data << endl;
   preOrder( currentNode->left );
   preOrder( currentNode->right );
}

void BinarySearchTree::postOrder( TreeNode* currentNode )
{
   if ( !currentNode )
      return;
   
   postOrder( currentNode->left );
   postOrder( currentNode->right );
   cout <<  currentNode->data << endl;
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
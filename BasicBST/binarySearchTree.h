#pragma once

#include <iostream>
#include <cstdlib>
#include <vector>

#include "treeNode.h"

// Binary Search Tree - for searching Integers
class BinarySearchTree
{
   public:
      BinarySearchTree()  { itemCount = 0; root = nullptr; };
      ~BinarySearchTree() { delete root; };

      bool isEmpty()      { return itemCount < 1; };
      int  getItemCount() { return itemCount; };

      // Public AddItem into BST
      void addItem( int newItem );
      void printInOrder()                  { inOrder  ( root );             };
      void printPreOrder()                 { preOrder ( root );             };
      void printPostOrder()                { postOrder( root );             };
      void PrintFindItem( int dataToFind ) { findItem ( root, dataToFind ); };

      // Print function
      void prettyPrint( int indexItem, int indent );


   private:
      int itemCount;
      int maxDepth;
      int currentDepth;
      TreeNode* root;
      
      // Private recursive functions
      TreeNode* insert   ( TreeNode* currentNode, int value );
      void      findItem ( TreeNode* currentNode, int dataToFind );
      void      inOrder  ( TreeNode* currentNode );
      void      preOrder ( TreeNode* currentNode );
      void      postOrder( TreeNode* currentNode );
};
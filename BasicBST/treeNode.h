#pragma once

struct TreeNode
{
   int data;
   TreeNode* right;
   TreeNode* left;

   // Constructor
   TreeNode( int data )
   {
      this->data = data;
      right = left = nullptr;
   }
   ~TreeNode()
   {
      delete right;
      delete left;
   };
};
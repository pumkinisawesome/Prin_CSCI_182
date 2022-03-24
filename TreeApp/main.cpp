/***************************
Tree Application File
Brett Huffman
CSCI 182 - Mar 3, 2022
***************************/

#include <iostream>
#include "tree.h"

int main()
{
    Tree t1( "Oak"    );
    Tree t2( "Spruce" );

    t1.printTree();
    t2.printTree();

    // Test the copy constructor 
    Tree t3( t2 );
    t3.printTree();

    // Next test the assignment operator
    // by assigning t3 to equal t1
    t3 = t1;
    t3.printTree();

    return 0;
}
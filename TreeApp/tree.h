/***************************
Tree Class Definition File
Brett Huffman
CSCI 182 - Mar 3, 2022
***************************/
#include <iostream>

// Tree Class definition
class Tree
{
public:
    // Constructors
    Tree( const std::string& treeName );
    Tree( const      Tree&   oldTree  );

    // Destructor
    ~Tree();

    // PrintTree function
    void printTree();

    // Assignment Operator
    Tree& operator=( const Tree& );

private:
    std::string* m_pStrTreeName{ NULL };
    int          m_nLenTreeName{      };
};
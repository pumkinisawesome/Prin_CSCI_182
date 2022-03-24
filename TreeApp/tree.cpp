/***************************
Tree Class Implementation File
Brett Huffman
CSCI 182 - Mar 3, 2022
***************************/
#include "tree.h"

// Constructor - pass in a string name
Tree::Tree( const std::string& treeName )
{
    // Create a new string and assign it
    m_pStrTreeName = new std::string( treeName );

    // Set the length of the string
    m_nLenTreeName = m_pStrTreeName->length();
}


// Copy Constructor
Tree::Tree( const Tree& oldTree )
{
    if( m_pStrTreeName == NULL )
        // If current string was never create, create it!
        m_pStrTreeName = new std::string( oldTree.m_pStrTreeName->c_str() );
    else
    {   // If m_pStrTreeName is already a created string
        m_pStrTreeName->erase();
        m_pStrTreeName->append( oldTree.m_pStrTreeName->c_str() );
    }
    // Set the tree name length
    m_nLenTreeName = m_pStrTreeName->length();
}


// Destructor
Tree::~Tree()
{
    // Delete the object, if it exists
    if( m_pStrTreeName != NULL )   // Best way of doing it!
        delete m_pStrTreeName;
}


// Print the address of the pointer + the tree's name
void Tree::printTree()
{
    std::cout << "Tree @ " << m_pStrTreeName << " : " << m_pStrTreeName->c_str() << '\n';
}


// Assignment Opertor
Tree& Tree::operator=( const Tree& oldTree )
{
    if( m_pStrTreeName == NULL )
        // If current string was never create, create it!
        m_pStrTreeName = new std::string( oldTree.m_pStrTreeName->c_str() );
    else
    {   // If m_pStrTreeName is already a created string
        m_pStrTreeName->erase();
        m_pStrTreeName->append( oldTree.m_pStrTreeName->c_str() );
    }
    // Set the tree name length
    m_nLenTreeName = m_pStrTreeName->length();
    return *this;
}
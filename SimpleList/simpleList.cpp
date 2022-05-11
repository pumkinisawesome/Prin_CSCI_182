#include "simpleList.h"


SimpleList::~SimpleList()
{
    while( head != nullptr )
    {
        node* temp{ head };
        head = temp->next;
        delete temp;
    }
}

void SimpleList::displayList()
{
    node* temp = head;
    while( temp != nullptr )
    {
        std::cout << temp->data << " | ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Queue functionality
void SimpleList::queueItem( int value )
{
    // Create a new Node and initialise
    node* temp = new node;
    temp->data = value;
    temp->next = nullptr;

    // Put node in correct spot
    // If head is empty...
    if( head == nullptr )
    {
        head = temp;
        tail = temp;
        temp = nullptr;
    }
    else
    // If head is not empty...
    {
        tail->next = temp;
        tail = temp;
        temp = nullptr;
    }

    // Display list
    displayList();
}

int SimpleList::deQueueItem()
{
    if ( head == nullptr )
        return ERR_NOT_FOUND;
    
    // Keep track of where we are
    node* temp = head;
    head = temp->next;

    // Get items data
    int nReturnVal = temp->data;

    // Delete the old item
    delete temp;

    // If that was the last one in the list
    if ( head == nullptr )
        tail = nullptr;

    // Display list
    displayList();

    return nReturnVal;
}

// Stack functionality
void SimpleList::pushItem( int value )
{
    // Create a new Node and initialise
    node* temp = new node;
    temp->data = value;
    temp->next = nullptr;

    // Put node in correct spot
    // If head is empty...
    if( head == nullptr )
    {
        head = temp;
        tail = temp;
        temp = nullptr;
    }
    else
    // If head is not empty...
    {
        tail->next = temp;
        tail = temp;
        temp = nullptr;
        // temp->next = head;
        // head = temp;
        // temp = nullptr;
    }

    // Display list
    displayList();
}

int SimpleList::popItem()
{
    // If list is empty
    if ( tail == nullptr )
        return ERR_NOT_FOUND;
    
    // Keep track of where we are
    node* temp = head;
    node* tempToDelete = tail;

    // Get items data
    int nReturnVal = tail->data;

    

    // Move through list and find penultimate value
    while ( temp->next != tail )
        temp = temp->next;

    // Set tail to penultimate value
    tail = temp;

    // Delete the old item
    delete tempToDelete;

    // If that was the last one in the list
    if ( head == nullptr )
        tail = nullptr;
    
    // Display list
    displayList();

    return nReturnVal;
}
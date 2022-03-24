#include "simpleList.h"


SimpleList::SimpleList()
{
    
}

SimpleList::~SimpleList()
{
    while( head != nullptr )
    {
        node* temp = head;
        head = temp->next;
        delete temp;
    }
}

void SimpleList::queueItem(int value)
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
    {
        tail->next = temp;
        tail = temp;
        temp = nullptr;
    }
}

int SimpleList::deQueueItem()
{
    if ( head == nullptr )
        return -1;
    
    node* temp = head;
    head = temp->next;

    int nReturnVal = temp->data;

    delete temp;

    if ( head = nullptr )
        tail = nullptr;

    displayList();

    return nReturnVal;
}

void SimpleList::displayList()
{
    
}

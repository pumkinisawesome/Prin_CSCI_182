#pragma once

#include <iostream>
#include "node.h"

class SimpleList
{
public:
	SimpleList();

	~SimpleList();

	void queueItem  ( int value );
	int  deQueueItem();
	void displayList();

private:
    node* head{};
	node* tail{};
};

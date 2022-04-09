#pragma once

#include <iostream>
#include "node.h"

#define ERR_NOT_FOUND -10000
#define ERR_GENERAL_ERR -10001

class SimpleList
{
	public:
		SimpleList() {};

		~SimpleList();

		// Queue functionality
		void queueItem  ( int value );
		int  deQueueItem();
		void displayList();

		// Stack functionality
		void pushItem( int value );
		int  popItem ();

	private:
		node* head{ nullptr };
		node* tail{ nullptr };
};

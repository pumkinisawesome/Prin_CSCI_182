/**
 * @file main.cpp
 * @author Jamie Bland (jamie@theblands.net)
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

#include "simpleList.h"

int main()
{
    SimpleList sll;

    sll.queueItem(1000);
    sll.queueItem(2000);
    sll.queueItem(3000);

    int val = sll.deQueueItem();
    if ( val == ERR_NOT_FOUND )
        std::cout << "Value not found" << std::endl;

    val = sll.deQueueItem();
    if ( val == ERR_NOT_FOUND )
        std::cout << "Value not found" << std::endl;

    val = sll.deQueueItem();
    if ( val == ERR_NOT_FOUND )
        std::cout << "Value not found" << std::endl;
    
    val = sll.deQueueItem();
    if ( val == ERR_NOT_FOUND )
        std::cout << "Value not found" << std::endl;
    
    sll.queueItem(4000);
    sll.queueItem(5000);

    // Finally print it
    std::cout << "Final list: " << std::endl;
    sll.displayList();

    // PREPARE FOR STACK
    std::cout << "\n\n\n";

    sll.pushItem(6000);
    sll.pushItem(7000);
    sll.pushItem(8000);

    val = sll.popItem();
    if ( val == ERR_NOT_FOUND )
        std::cout << "Value not found" << std::endl;
    
    val = sll.popItem();
    if ( val == ERR_NOT_FOUND )
        std::cout << "Value not found" << std::endl;
    
    val = sll.popItem();
    if ( val == ERR_NOT_FOUND )
        std::cout << "Value not found" << std::endl;
    
    val = sll.popItem();
    if ( val == ERR_NOT_FOUND )
        std::cout << "Value not found" << std::endl;
    
    sll.pushItem(9000);
    sll.pushItem(10000);

    // Finally print it
    std::cout << "Final list: " << std::endl;
    sll.displayList();

    return 0;
}
/**
 * @file main.cpp
 * @author Jamie Bland (jamie@theblands.net)
 * @brief Main.cpp for AutoParts Project
 * @version 0.1
 * @date 2022-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include "autopart.h"


int main()
{
    AutoPart a1( 7, 21, "Omid's Steering Column" );
    a1.PrintPart();

    
    AutoPart* a2 = new AutoPart( 8, 21, "Jo's Steering Wheel" );

    a2->PrintPart();
    delete a2;
    
    std::cout << "Out Of Scope" << '\n';


    return 0;
}
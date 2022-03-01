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
#include "enginePart.h"


int main()
{
    // Time for some Auto parts!

    // Auto part on stack
    AutoPart a1( 7, 21, "Omid's Steering Column" );
    a1.printPart();

    // Auto part on heap
    BasePart* a2 = new AutoPart( 8, 21, "Jo's Steering Wheel" );

    a2->printPart();
    delete a2;

    // Now engine parts!

    // Engine part on stack
    EnginePart e1( 11, 32, "Jamie's Engine Block", 30422 );
    e1.printPart();

    // Engine part on heap
    BasePart* e2 = new EnginePart( 12, 41, "Jeremy's Piston", 40089 );

    e2->printPart();
    delete e2;


    std::cout << "Out Of Scope" << '\n';

    return 0;
}
/**
 * @file autopart.cpp
 * @author Jamie Bland (jamie@theblands.net)
 * @brief autopart.cpp for AutoParts Project
 * @version 0.1
 * @date 2022-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <iostream>
#include "autopart.h"

// Constructor
AutoPart::AutoPart( int partNo, int partMaker, std::string partDescription )
{
    std::cout << "In Autopart Constructor" << '\n';
    partNo_          = partNo         ;
    partMaker_       = partMaker      ;
    partDescription_ = partDescription;
}

// Destructor
AutoPart::~AutoPart()
{
    std::cout << "In Autopart Destructor: " << partDescription_ << '\n';
}

// Print the part
void AutoPart::PrintPart()
{
    std::cout << partDescription_ << '\n';
}
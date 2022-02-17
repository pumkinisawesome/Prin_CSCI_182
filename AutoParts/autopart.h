/**
 * @file autopart.h
 * @author Jamie Bland (jamie@theblands.net)
 * @brief 
 * @version 0.1
 * @date 2022-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef AUTOPART_H
#define AUTOPART_H

#include <iostream>

class AutoPart
{
    private:
        std::string partDescription_;
        int         partMaker_      ;
        int         partNo_         ;
    public:
        AutoPart( int partNo, int partMaker, std::string partDescription );
        ~AutoPart();

        // Member function
        void PrintPart();
};

#endif
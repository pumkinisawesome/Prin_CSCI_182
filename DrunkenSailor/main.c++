/**
 * @file main.c++
 * @author Jamie Bland (jamie@theblands.net)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Import libraries
#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define constants
constexpr int MAP_WIDTH  = 20;
constexpr int MAP_HEIGHT = 20;
constexpr int MAX_STEPS  = 1000;

// Define data types
enum Direction { NORTH, EAST, SOUTH, WEST };

// Define our variables
int arrSteps[ MAP_WIDTH ][ MAP_HEIGHT ]{ 0 };
// int arrTest[ 4 ]{ 0 };

int nSailorX{ MAP_WIDTH  / 2 };
int nSailorY{ MAP_HEIGHT / 2 };


int main()
{
    // create seed for random numbers
    srand( time( NULL ) );

    // Loop through and move sailor in grid
    for ( int nCurrentSteps{ 0 }; nCurrentSteps < MAX_STEPS; nCurrentSteps++ )
    {
        Direction nextStepDirection{ static_cast<Direction>( rand() % 4 ) };

        // For each step move sailor
        switch ( nextStepDirection )
        {
            case NORTH:
                if ( nSailorY > 0 )
                    nSailorY--;
                else
                    continue;
                break;
            
            case EAST:
                if ( nSailorX < MAP_WIDTH - 1 )
                    nSailorX++;
                else
                    continue;
                break;

            case SOUTH:
                if ( nSailorY < MAP_HEIGHT - 1 )
                    nSailorY++;
                else
                    continue;
                break;

            case WEST:
                if ( nSailorX > 0 )
                    nSailorX--;
                else
                    continue;
                break;
        }

        // Increment box sailor is in
        arrSteps[ nSailorX ][ nSailorY ]++;
    }

    // Loop through rows and columns of grid
    // and print to screen
    for ( int currentY{ 0 }; currentY < MAP_HEIGHT; currentY++ )
    {
        for ( int currentX{ 0 }; currentX < MAP_WIDTH; currentX++ )
        {
            std::cout << arrSteps[ currentX ][ currentY ] << '\t';
        }
        std::cout << '\n';
    }


    return 0;
}
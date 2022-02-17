/**
 * @file main.cpp
 * @author Jamie Bland (jamie@theblands.net)
 * @brief 
 * @version 0.1
 * @date 2022-02-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int WIDTH  = 20;
const int HEIGHT = 20;

using namespace std;

int main()
{

    // Seed the random
    srand( time( NULL ) );

    int arrItems[ WIDTH * HEIGHT ] = {0};

    // FIll array with random values
    for( int i = 0; i < WIDTH * HEIGHT; i++ )
        arrItems[ i ] = rand() % 100;

    for( int i = 0; i < HEIGHT * WIDTH; i++ )
    {
        cout << arrItems[ i ] << '\t';
    }

    // Loop through array and print to screen
    cout << endl;
    cout << endl;

    // Loop through rows and columns of grid
    // and print to screen
    for( int i = 0; i < HEIGHT; i++ )
    {
        for( int j = 0; j < WIDTH; j++ )
            cout << arrItems[ i * WIDTH + j ] << '\t';
    }

    cout << endl;

    return 0;
}
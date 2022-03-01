/**
 * @file main.cpp
 * @author Jamie Bland (jamie@theblands.net)
 * @brief 
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int maximum( int arr[], int arrSize )
{
    int* pArr{ arr };
    int maxValue{ 0 };

    for( int i=0; i < arrSize; i++ )
    {
        if( *pArr > maxValue )
            maxValue = *pArr;
        pArr++;
    }
    
    return maxValue;
}

int oddSwap( int &x, int &y )
{
    int temp = x;
    x = y * 5;
    y = temp * 5;
    return x + y;
}

int oddSwapPtr( int* x, int* y )
{
    int temp = *x;
    *x = *y * 5;
    *y = temp * 5;
    return *x + *y;
}


int main()
{
    int x = 11;
    int y = 14;

    int returnVal1{ oddSwap( x, y ) };
    int returnVal2{ oddSwapPtr( &x, &y ) };

    std::cout << returnVal1 << '\t' << returnVal2;

    return 0;
}
/**
 * @file main.cpp
 * @author Jamie Bland (jamie@theblands.net)
 * @brief 
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

#include "circuit.h"
#include "parallelCircuit.h"
#include "seriesCircuit.h"

int main()
{
    ParallelCircuit testParallelCircuit( 12.0f );
    testParallelCircuit.addNewResistance( 12.0f );

    std::cout << testParallelCircuit.getResistance() << '\n';

    SeriesCircuit testSeriesCircuit( 12.0f );
    testSeriesCircuit.addNewResistance( 12.0f );

    std::cout << testSeriesCircuit.getResistance() << '\n'; 

    return 0;
}
#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "simpleList.h"

int main()
{
    const int WASH_TIME{ 3 }; // In minutes

    SimpleList queue;

    srand( time( NULL ) );

    int simulationTime{ 0 }; // In hours
    std::cout << "How long, in hours, do you want the simulation to run for?" << std::endl;
    std::cout << "Please enter an integer: ";
    std::cin  >> simulationTime;

    double carProbabilityPerSecond{ 0.0005 };
    std::cout << "What is the probability of a car arriving per second?" << std::endl;
    std::cout << "Please enter a decimal number between 0 and 1: ";
    std::cin  >> carProbabilityPerSecond;

    int  carsWashed      { 0     };
    int  carsInQueue     { 0     };
    bool carInCarWash    { false };
    int  currentWashTime { 0     }; // In seconds
    int  totalCarWaitTime{ 0     }; // In seconds

    for ( int currentTime{ 0 }; currentTime < simulationTime * 60 * 60; currentTime++ )
    {
        if ( rand() % 1000000 < carProbabilityPerSecond * 1000000 )
        {
            queue.queueItem( currentTime );
            carsInQueue++;
        }

        if ( carInCarWash )
        {
            currentWashTime++;
            if ( currentWashTime == WASH_TIME * 60 )
            {
                carInCarWash = false;
            }
        }
        else if ( !carInCarWash && carsInQueue > 0 )
        {
            totalCarWaitTime += currentTime - queue.deQueueItem();
            carInCarWash = true;
            currentWashTime = 0;
            carsInQueue--;
            carsWashed++;
        }

        
    }

    int averageWaitTime{ totalCarWaitTime / carsWashed }; // In seconds
    std::cout << "The total number of cars washed was " << carsWashed << "." << std::endl;
    std::cout << "The average wait time for a car was " << averageWaitTime / 60 << " minutes." << std::endl;
    if ( carsInQueue == 0 )
    {
        std::cout << "There were no cars in the queue." << std::endl;
    }
    else if ( carsInQueue == 1 )
    {
        std::cout << "There was 1 car in the queue." << std::endl;
    }
    else
    {
        std::cout << "There were " << carsInQueue << " cars in the queue." << std::endl;
    }


    return 0;
}
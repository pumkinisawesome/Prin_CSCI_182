/*
Mod Program - determines the Mod of two numbers
Jamie Bland
CSCI 182
1/27/2022
*/

#include <iostream>

// Function to find Mod with the subtraction method
int ModBySub(int nFirstVal, int nSecondVal)
{
    // Test input
    if(nFirstVal < nSecondVal || nSecondVal < 1)
    return -1;

    // Keep track of the left over values after each subtraction
    int nLeftOverValue = nFirstVal;
    while(nLeftOverValue >= nSecondVal)
        nLeftOverValue -= nSecondVal;
    

    // return the left over value
    return nLeftOverValue;

}

int ModByDivis(int nFirstVal, int nSecondVal)
{
    // Test input
    if(nFirstVal < nSecondVal || nSecondVal < 1)
        return -1;

    // Divide values to get integer division result
    int nDividedVal = nFirstVal / nSecondVal;

    // Multiply divided value back by second value
    int nMultipliedVal = nDividedVal * nSecondVal;

    return nFirstVal - nMultipliedVal;

    
}

// Main function
int main()
{
    // Take two numbers
    int nVal1 = 11;
    int nVal2 = 4;

    // Find the Mod
    int nReturnVal1 = ModBySub(nVal1, nVal2);
    int nReturnVal2 = ModByDivis(nVal1, nVal2);

    // Print it
    std::cout << nReturnVal1 << ' ' << nReturnVal2 << std::endl;

    return 0;

}
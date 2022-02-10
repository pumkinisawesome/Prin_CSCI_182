#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

constexpr int MAX_BOAT_COUNT = 30;

struct Boat
{
    int yearBuilt;
    string name;
};

// Adds white space to a string to extend the length to charNum, so that text can be alligned
string getSpacedString(string inputString, int charNum)
{
    string tempString{ inputString };

    while (tempString.length() < charNum)
        tempString += ' ';

    return tempString;
}

void printBoat(Boat tempBoat)
{
    cout << "Ship name: " << getSpacedString(tempBoat.name, 25);
    cout << "Year built: " << tempBoat.yearBuilt << endl;
}

int main()
{

    // Start by reading in the files
    ifstream inFile;

    inFile.open("BoatNames.txt");
    if (!inFile)
    {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    Boat Fleet[MAX_BOAT_COUNT];

    // Put all the boat names into an array, then print them to the screen
    char tempName[80];
    int nYear;
    int importCount = 0;

    // Read the input file for each player
    while (!inFile.eof() && importCount < MAX_BOAT_COUNT)
    {
        // Read in line
        inFile >> tempName >> nYear;

        // Write to Fleet's Structure here
        Fleet[importCount].name = tempName;
        Fleet[importCount].yearBuilt = nYear;

        importCount++;
    }
    // Close the input file
    inFile.close();

    // Now, print out each boat name by calling a
    // function to print each array item
    for (int i = 0; i < importCount; i++)
    {
        printBoat(Fleet[i]);
    }
    
}
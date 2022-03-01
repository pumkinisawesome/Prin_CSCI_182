#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

constexpr int MAX_BOAT_COUNT = 30;

struct Boat
{
    int yearBuilt;
    string name;
};

// Adds white space to a string to extend the length to charNum, so that text can be alligned
string getSpacedString( string inputString, int charNum )
{
    string tempString{ inputString };

    while ( tempString.length() < charNum )
        tempString += ' ';

    return tempString;
}

void printBoat( Boat tempBoat )
{
    cout << "Ship name: "  << getSpacedString( tempBoat.name, 25 )       ;
    cout << "Year built: " <<                  tempBoat.yearBuilt  << endl;
    }

int main()
{
    // Start by reading in the files
    ifstream inFile;

    inFile.open("BoatNames.txt");
    if( !inFile )
    {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    std::vector<Boat> fleet{};

    // Create a temporary Boat
    Boat tempBoat{};
    int importCount{ 0 };

    // Read the input file for each player
    while ( !inFile.eof() && importCount < MAX_BOAT_COUNT )
    {
        // Read in line

        inFile >> tempBoat.name >> tempBoat.yearBuilt;

        fleet.push_back( tempBoat );

        importCount++;
    }
    // Close the input file
    inFile.close();

    // Now, print out each boat name by calling a
    // function to print each array item
    for ( size_t i = 0; i < fleet.size(); i++ )
    {
        printBoat( fleet[i] );
    }
}
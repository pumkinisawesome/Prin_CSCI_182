#include <iostream>

int main()
{
    // Create array of integers
    int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // Create list that stores the array's size
    int listSize = sizeof( list ) / sizeof( list[0] );

    // Target value for three contiguous integers to sum to
    int target = 9;

    // Boolean to store whether a sum has been found
    bool found = false;

    // Loop through array
    for ( int i = 0; i < listSize - 1; i++ )
    {
        // Integer to store sum total
        int sum = 0;

        // Loop through rest of array
        for ( int j = i; j < listSize; j++ )
        {
            sum += list[ j ];

            if ( sum == target )
            {
                found = true;

                // Output values
                std::cout << '[';
                for ( int k = 0; k < j - 1; k++ )
                {
                    std::cout << list[ i + k ] << ", ";
                }
                std::cout << list[ i + j - 1 ] << "]\n";
                break;
            }
            else if ( sum > target )
            {
                break;
            }
        }
        if ( found )
            break;
    }
    if ( !found )
    {
        std::cout << "No contiguous elements found which sum to " << target << std::endl;
    }

    return 0;
}
#include <iostream>
#include "bubbleSort.h"

int main()
{
    int arr[]  { 11, 64, 71, 12, 15, 18, 2, 27, 3, 9, 10 };
    int arrSize{ sizeof( arr ) / sizeof( arr[0] ) };

    SortBase* sb = nullptr;

    std::cout << "(1) for BubbleSort" << std::endl;
    std::cout << "(2) for InsertSort" << std::endl;
    std::cout << "Enter your choice: ";

    int ntype{ 0 };
    cin >> ntype;

    switch ( ntype )
    {
        case 1:
            sb = new BubbleSort();
            break;
        case 2:
            sb = new InsertSort();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    for ( int i { 0 }; i < arrSize; i++ )
    {
        sb->addItem( arr[ i ] );
    }

    sb->printVector();

    sb->sort();

    sb->printVector();

    if ( sb != nullptr )
    {
        delete sb;
    }


    return 0;
}
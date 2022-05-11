#include <iostream>

using namespace std;

char board[] = {
   's', ' ', ' ', 'x',
   'x', 'x', ' ', ' ',
   ' ', ' ', ' ', ' ',
};

const int ROW_MAX = 3;
const int COL_MAX = 4;

// Count paths function
int countPaths( int row, int col )
{
   int paths = 0;

   // Term: if we reached the goal
   if ( row == ROW_MAX - 1 && col == COL_MAX - 1 )
      return 1;

   // Rec: Can we move down
   if ( row < ROW_MAX - 1 && board[col + ((row + 1) * COL_MAX)] == ' ' )
      paths += countPaths( row + 1, col );

   // Rec: Can we move right
   if ( col < COL_MAX - 1 && board[(col + 1) + (row * COL_MAX)] == ' ' )
      paths += countPaths( row, col + 1 );
   
   return paths;
}

int main()
{
   cout << endl << countPaths( 0, 0 ) << endl;

   return 0;
}
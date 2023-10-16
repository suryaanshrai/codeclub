// Also available at: https://onlinegdb.com/wZ2M9JKFkj

// https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1

/*                 
                                            N-QUEENS PROBLEM

    Problem statement: Given a chess board of size n, you have to place a queen in each column, such that
        the configuration of the board is safe, i.e. no queen may kill any other queen.
    
    SOLUTION APPROACH: A very intuitive approach can be to place a queen in the first cell of the column
        and then find a safe spot in the next column and repeat the same until we reach the last column.
        In case we reach a dead end, then we remove the queen from that cell of the column and place it on the
        next one. We repeat this process until we exhaust all possible combinations.
        If we find a valid combination then we return true, else false. Note that the n-queens problem can be
        solved for all n > 3.
        
        A very good visualisation of the approach discussed above can be found at:
        
                    https://youtu.be/XL8O5P3S0RU?si=prx31IjI4EWwBIs3
        
        The step at which we remove the queen from the first cell of the column and then place it in the 
        second cell is where we are doing what is called as 'backtracking'. It is what the name suggests.
        We try a step and if reach the solution, then well and good or else we go one step backward and do
        something different.
        A formal definition would be:
            "Backtracking is a general algorithmic technique for solving problems recursively by trying
            to build a solution incrementally, one piece at a time, removing those solutions that fail 
            to satisfy the constraints of the problem at any point in time."
    
    Problem link:   https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1
    
    The above given problem is slightly varied from the one implemented here. That problem requires 
    you to return all possible configurations of a board.
    What we have implemented here prints the first possible configuration that the algorithm finds.
    
    Note: This is a very famous problem on backtracking. However, it can be a bit challenging to get a hold of 
    the concepts used and applied for solving this problem. It is reccommended that you have a decent
    understanding of recursion prior to solving this.
    
    If this still confuses you, you are encouraged to watch a video of Abdul Bari, Striver, Luv Babbar
    or any other resource preferred by you.
    
    Abdul Bari: https://youtu.be/xFv_Hl4B83A?si=dKKFHbOwwsP7oFlG
    Striver:    https://youtu.be/i05Ju7AftcM?si=TVTHHqzIO-_hvqi2
    Luv Babbar: https://www.youtube.com/watch?v=9wEwqNdOAVQ
    
*/

#include <iostream>
#include <vector>

using namespace std;

bool placeQueen (vector<vector<int>>board, int row, int col, int n);
bool solveNQueen (vector<vector<int>> &board, int c, int n);


// Note: In the given code, 1 means a queen is placed there and 0 means that place is empty
int main ()
{
    cout << "Enter size of board: ";
    int n;
    cin >> n;

    vector<vector<int>> board;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp (n, 0);
        board.push_back (temp);
    }
    
    /*
       The above block of code, in which we are initializing the array, can be shortened as:
              vector<vector<int>> board(n,vector<int>(n,0));
    */

    if (solveNQueen (board, 0, n))
    {
      cout << "The solution board is: " << endl;
        for (int i = 0; i < n; i++)
	    {
	        for (int j = 0; j < n; j++)
	        {
	            cout << board[i][j] << " ";
	        }
	        cout << endl;
	    }
    }
    else
    {
        cout << "No solution exists :(";
    }

    return 0;
}


// This function checks if a queen can be placed at the cell with index (row,col) or not
bool placeQueen (vector<vector<int>>board, int row, int col, int n)
{
    // Check whether there is any other queen in the same row
  for (int j = col; j >= 0; j--)
    if (board[row][j] == 1)
      return false;
    
    // Check if any queen is in the upper left diagonal
  for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    if (board[i][j] == 1)
      return false;
    
    // Check if any queen is in the bottom left diagonal
  for (int i = row + 1, j = col - 1; i < n && j >= 0; i++, j--)
    if (board[i][j])
      return false;

    // If the above three conditions are passed, then the queen can be placed
  return true;
}


// This is the function which would solve the problem by using backtracking
bool solveNQueen (vector<vector<int>> &board, int c, int n)
{
    // Base case: if we have reached the final column, then all queens have been placed
  if (c >= n)
    {
      return true;
    }
    
    // Iteratively place a queen in each row of the given column
    for (int i = 0; i < n; i++)
    {
        if (placeQueen (board, i, c, n))
	    {
	        // If we can a place a queen at cell (i,n), then we place the queen there and try to solve further
	        board[i][c] = 1;
	        if (solveNQueen (board, c + 1, n))
	        {
	            // In case this works and we solve the board, we return true
	            return true;
	        }
	        // If we are not able to solve this by placing the queen at (i,c), then we remove the queen from that position
	        board[i][c] = 0;
	        
	        // This step is the backtracking step as we are removing the queen from where we placed it
        }
    }
  return false;
}


// { Driver Code Starts
// C++ program to find Deteminant of a matrix
#include <bits/stdc++.h>
using namespace std;

// Dimension of input square matrix
#define N 105


 // } Driver Code Ends


/*  Function to find determinant of matrix
*   mat[][]: input matrix
*   n: given size of matrix
*   N: defined size globally
*/
int determinantOfMatrix( int mat[N][N], int n)
{
     // Need to Complete this.
    // Your code here

}

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
	  int t;
	cin>>t;
	while(t--)
	{
	  int no;
	cin>>no;
	  int mat[N][N];
	for(  int i=0;i<no;i++)
	{
	    for(  int j=0;j<no;j++)
	    {
	        cin>>mat[i][j];
	    }
	}
	printf("%d",determinantOfMatrix(mat, no));
	printf("\n");
	}
	return 0;
}  // } Driver Code Ends

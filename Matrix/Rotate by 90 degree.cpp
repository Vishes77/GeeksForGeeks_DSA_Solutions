// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 105


 // } Driver Code Ends


/*  Function to rotate matrix by 90 degrees
*   n: input for matrix size
*   N: size defined globally
*/
void rotateby90(int n, int a[][N]){

    // Your code here
    for(int i=0;i<n;i++){        // Taking Transpose of The Matrix.
        for(int j=i + 1;j<n;j++){
            swap(a[i][j], a[j][i]) ;
        }
    }

    // Reverse Columns
    for(int i=0;i<n;i++){    // i iterator is for Row Wise Iteration.
        int low=0,high=n-1;  // low , high used for column Iteration.
        while(high>low){
            swap(a[low][i],a[high][i]);
            low++;
            high--;
        }
    }
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t; //inputting testcases
	while(t--)
	{
		int n;
		cin>>n; //inputing n for square matrix
		int a[N][N],i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j]; //Inputting the matrix
			}
		}

		rotateby90(n, a);

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<a[i][j]<<" "; //printing the resultant matrix
			}
		}
		cout<<endl;

	}
	return 0;
}  // } Driver Code Ends

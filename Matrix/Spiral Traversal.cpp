// { Driver Code Starts
#include <iostream>
using namespace std;

#define SIZE 105

void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]);

int main() {
	int T = 0;

	scanf("%d",&T);

	while(T--)
	{
        int m,n;
        scanf("%d",&m);
        scanf("%d",&n);
	    int ar[SIZE][SIZE] = {{0}};
	    int i = 0;
	    int j = 0;
	    int row = 0;
	    int col = 0;

	    for(i=0; i<m; i++)
	    {
	        for(j=0; j<n; j++)
	        {
	            scanf("%d",&ar[i][j]);
	        }
	    }

	    spirallyTraverse(m, n, ar);
	    cout<<endl;

	}
	return 0;
}// } Driver Code Ends


//Complete this function
void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]){
    //Your code here
    int top=0, right = n-1, down = m-1, left = 0;
    while (top <= down && right >= left){  //Top traversal.
        for(int i=left;i<right+1;i++){
            cout<<ar[top][i]<<" ";
        }
        top++;
        for(int i=top;i<down+1;i++){    //right traversal.
            cout<<ar[i][right]<<" ";
        }
        right--;
        if(top<=down){
            for(int i=right;i>=left;i--){  // Bottom traversal
            cout<<ar[down][i]<<" ";
            }
        }
        down--;
        if(left <= right ){
            for(int i=down;i>=top;i--){  //Down to up Traversal.
            cout<<ar[i][left]<<" ";
            }
        }
        left++;
    }
}

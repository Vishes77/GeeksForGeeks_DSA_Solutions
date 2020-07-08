// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define SIZE 105

void interchangeRows(int n1, int m1, int arr1[SIZE][SIZE]);
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int n1,m1;
        cin>>n1>>m1;
        int arr1[SIZE][SIZE];
        for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        cin>>arr1[i][j];

        interchangeRows(n1, m1, arr1);

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            cout<<arr1[i][j]<<" ";
        }

        cout<<endl;
    }

	return 0;
}// } Driver Code Ends


//Complete this function
void interchangeRows(int n1, int m1, int arr1[SIZE][SIZE])
{
    //Your code here
    int top=0,down=n1-1;
    while(down >= top){
        for(int i=0;i<m1;i++){
            swap(arr1[top][i],arr1[down][i]);
        }
        top++;
        down--;
    }
}

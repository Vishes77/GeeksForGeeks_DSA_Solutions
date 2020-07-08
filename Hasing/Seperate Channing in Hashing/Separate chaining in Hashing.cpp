// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;


	    int sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];

	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];

	    vector<vector<int>> hashTable;
	    hashTable = (separateChaining( hashSize, arr, sizeOfArray));

	    for(int i=0;i<hashTable.size();i++)
	    {
	        if(hashTable[i].size()>0)
	        {
	            cout<<i<<"->";
	            for(int j=0;j<hashTable[i].size()-1;j++)
	            {
	                cout<<hashTable[i][j]<<"->";
	            }
	            cout<<hashTable[i][hashTable[i].size()-1];
	            cout<<endl;
	        }
	    }



	}
	return 0;
}
// } Driver Code Ends


//Complete this function

vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray)
{
   //Your code here
   vector<vector<int>> hashTable(hashSize);

    for(int i=0;i<sizeOfArray;i++)//Iterating over the array
    {
       hashTable[arr[i]%hashSize].push_back(arr[i]); //pushing element arr[i] in the vector hashTable at position arr[i]%hashSize
    }
    return hashTable;
}

// { Driver Code Starts

import java.io.*;
import java.util.*;

class GFG {


 // } Driver Code Ends


//Complete this function
public static ArrayList<ArrayList<Integer>> separateChaining(int arr[], int n, int hashSize)
{
    //Your code here
    ArrayList<ArrayList<Integer>> res = new ArrayList<ArrayList<Integer>>(hashSize);
	    for(int i=0; i<hashSize; i++){
	        res.add(new ArrayList<Integer>());
	    }
        int tmpIndx;
        for(int i=0; i<n; i++) {
            tmpIndx = arr[i]%hashSize;
            res.get(tmpIndx).add(arr[i]);//pushing element arr[i] in the arrayList hashTable at position arr[i]%hashSize
        }
        return res;
}

// { Driver Code Starts.

	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
		while(t-->0){
		    int hashSize = Integer.parseInt(br.readLine().trim());
		    int n = Integer.parseInt(br.readLine().trim());
		    int arr[] = new int[n];
		    String inputLine[] = br.readLine().trim().split(" ");
		    for(int i=0; i<n; i++){
		        arr[i] = Integer.parseInt(inputLine[i]);
		    }
		    ArrayList<ArrayList<Integer>> res;
		    res = separateChaining(arr, n, hashSize);

		    for(int i=0;i<res.size();i++) {
	            if(res.get(i).size()>0) {
	                System.out.print(i+"->");
	                for(int j=0; j<res.get(i).size()-1; j++) {
	                    System.out.print(res.get(i).get(j) + "->");
	                }
	                System.out.print(res.get(i).get(res.get(i).size()-1));
	                System.out.println();
	            }
	        }
		}
	}
}

  // } Driver Code Ends

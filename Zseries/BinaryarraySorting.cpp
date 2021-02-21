// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;
vector<int> SortBinaryArray(vector<int> binArray);


 // } Driver Code Ends


//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array 
vector<int> SortBinaryArray(vector<int> v)
{
    // Your code goes here
    //sort(v.begin(), v.end()); 
    //return v;
    int c0 = 0, c1 = 0;
    int n = v.size();
    for(int i=0; i<n; i++){
        if(v[i] == 0) c0++;
        else c1++;
    }
    for(int i=0; i<n; i++){
       if(i<c0)v[i] = 0;
       else v[i] = 1;
    }
    return v;
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);
	    
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	      
	  	vector<int> result = SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
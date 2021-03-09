// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int n)
	{
	    vector<int> ans;
	    sort(arr,arr+n);
	    int i=0,j=n-1,k=0;
	    while (i < j) {
	        ans.push_back(arr[j--]);
	        ans.push_back(arr[i++]);
	    }
	    if (n % 2 != 0)
	        ans.push_back(arr[i]);
	    return ans;
	}

};
	

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
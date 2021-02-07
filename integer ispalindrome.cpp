// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int digit,rev =0,num = n;
            do{
                digit = num % 10;
                rev = (rev * 10) + digit;
                num = num/10;
            }while(num != 0);
            
            if(n == rev)
                return "Yes";
            else
                return "No";
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends
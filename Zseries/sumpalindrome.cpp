// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++
class Solution {
  public:
    long long reverse(long long n){
        int r = 0, d = 0;
        long long num = n;
        while(num >0){
            d = num % 10;
            r = r * 10 + d;
            num = num / 10;
        }
        return r;
    }
    bool ispalindrome(long long n){
        return (reverse(n) == n);
    }
    long long isSumPalindrome(long long n){
        int c = 0;
        while(!ispalindrome(n) && c < 5){
            int k = reverse(n);
            n+= k;
            c++;
        }
        if(ispalindrome(n)) return n;
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
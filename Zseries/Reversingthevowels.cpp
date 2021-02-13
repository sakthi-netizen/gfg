#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        bool isVowel(char c) { 
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'); 
        } 
        string modify (string s)
        {
            int front = 0, back = s.length() - 1;
            while(front < back){
                if(!isVowel(s[front])){
                    front++;
                    continue;
                }

                if(!isVowel(s[back])){
                    back--;
                    continue;
                }

                swap(s[front], s[back]);
                front++;
                back--;
            }
            return s;
        }
};
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
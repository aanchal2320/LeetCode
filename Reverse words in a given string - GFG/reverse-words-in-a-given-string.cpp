// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    void reverse(string &s,int start,int end)
    {
        while(start<end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
    string reverseWords(string s) 
    { 
       int l=s.length();
       int start=0;
       for(int end=0;end<l;end++)
       {
           if(s[end]=='.')
           {
               reverse(s,start,end-1);
               start=end+1;
           }
       }
       reverse(s,start,l-1);
       reverse(s,0,l-1);
       return s;
    } 
    
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
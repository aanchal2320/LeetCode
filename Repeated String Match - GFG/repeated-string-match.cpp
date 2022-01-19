// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{

    public:
    int contains(string a,string b)
    {
        int m=a.length();
        int n=b.length();
        for(int i=0;i<=m-n;i++)
        {
            if(a[i]==b[0])
            {
                if(a.substr(i,n)==b)
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    int repeatedStringMatch(string a, string b) 
    {
       string acpy=a;
       int count=1;
       while(a.length()<b.length())
       {
           a=a+acpy;
           count++;
       }
       if(contains(a,b)!=0)
       {
           return count;
       }
       if(contains(a+acpy,b)!=0)
       {
           return count+1;
       }
    return -1;
    }
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
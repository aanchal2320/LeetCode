// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        unordered_map<int,int>m;
        int prefix=0,res=0;
        for(int i=0;i<n;i++)
        {
            prefix+=a[i];
            if(prefix==0)
            {
                res=i+1;
            }
            if(m.find(prefix)==m.end())
            {
                m.insert({prefix,i});
            }
            if(m.find(prefix-0)!=m.end())
            {
                res=max(res,i-m[prefix-0]);
            }
        }
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
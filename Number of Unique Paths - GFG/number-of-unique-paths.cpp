// { Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int findpath(int i,int j,int m,int n,vector<vector<int>>&memo)
    {
        if((i==m) && (j==n))
        {
            return 1;
        }
        if((i>m) || (j>n))
        {
            return 0;
        }
        if(memo[i][j]!=-1)
        {
            return memo[i][j];
        }
        else
        {
          return memo[i][j]=findpath(i+1,j,m,n,memo)+findpath(i,j+1,m,n,memo);
        }
    }
    int NumberOfPath(int a, int b)
    {
       vector<vector<int>>memo(a+1,vector<int>(b+1,-1));
       if(a==1 && b==1)
       {
           return 1;
       }
      return findpath(0,0,a-1,b-1,memo);  
    }
};


// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}

  // } Driver Code Ends
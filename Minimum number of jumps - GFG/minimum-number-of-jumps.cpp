// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int maxrange=arr[0],steps=arr[0],jump=1;
        if(n<=1)
        {
            return 0;
        }
        else if(arr[0]==0)
        {
            return -1;
        }
        else 
        {
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                return jump;
            }
            maxrange=max(maxrange,arr[i]+i);
            steps--;
            if(steps==0)
            {
                jump++;
                if(i>=maxrange)
                {
                    return -1;
                }
                steps=maxrange-i;
            }
        }
        }
        return jump;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
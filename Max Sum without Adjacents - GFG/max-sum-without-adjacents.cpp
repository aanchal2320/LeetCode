// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int func(vector<int>&dp,int n,int ind,int *arr)
	{
	    if(ind==0)
	    {
	        return arr[ind];
	    }
	    if(ind<0)
	    {
	        return 0;
	    }
	    if(dp[ind]!=-1)
	    {
	        return dp[ind];
	    }
	    int pick=arr[ind]+func(dp,n,ind-2,arr);
	    int notpick=0+func(dp,n,ind-1,arr);
	    return dp[ind]=max(pick,notpick);
	}
	int findMaxSum(int *arr, int n) {
	    vector<int>dp(n+1,-1);
	    return func(dp,n,n-1,arr);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
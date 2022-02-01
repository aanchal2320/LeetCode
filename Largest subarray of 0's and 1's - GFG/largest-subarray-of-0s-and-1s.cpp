// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        unordered_map<int,int>mp;
        int sum=0;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i]==0?-1:1;
            if(sum==0)
            {
                if(ans<i+1)
                {
                    ans=i+1;
                }
            }
            else if(mp.find(sum)!=mp.end())
            {
                if(ans<i-mp[sum])
                {
                    ans=i-mp[sum];
                }
            }
            else
            {
                mp[sum]=i;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
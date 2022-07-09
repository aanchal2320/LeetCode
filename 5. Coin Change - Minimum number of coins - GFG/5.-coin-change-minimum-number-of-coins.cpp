// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Complete this function

class Solution
{
    public:
    //Function to find the minimum number of coins to make the change 
    //for value using the coins of given denominations.
    long long minimumNumberOfCoins(int coins[],int numberOfCoins,int val)
    {
        long long dp[val+1];
        dp[0]=0;
        for(long long i=1;i<=val;i++)
        {
            long long mini=INT_MAX;
            for(long long j=0;j<numberOfCoins;j++)
            {
                if(i>=coins[j])
                {
                    mini=min(mini,1+dp[i-coins[j]]);
                }
            }
            dp[i]=mini;
        }
        if(dp[val]==INT_MAX)
        {
            return -1;
        }
        return dp[val];
    }
};

// { Driver Code Starts.



int main() {
	
	//taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //taking value of each coin
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function minimumNumberOfCoins()
	    int answer=obj.minimumNumberOfCoins(coins,numberOfCoins,value);
	    
	    //printing "Not Possible" if answer is -1
	    //else printing answer
	    if(answer==-1)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
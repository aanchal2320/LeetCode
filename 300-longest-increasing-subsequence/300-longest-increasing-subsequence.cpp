class Solution {
public:
    int func(int ind,int prev,vector<int>&nums,int n,vector<vector<int>>&dp)
    {
        if(ind==n)
        {
            return 0;
        }
        if(dp[ind][prev+1]!=-1)
        {
            return dp[ind][prev+1];
        }
        int len=0+func(ind+1,prev,nums,n,dp);
        if(prev==-1 || nums[ind]>nums[prev])
        {
            len=max(len,1+func(ind+1,ind,nums,n,dp));
        }
        return dp[ind][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return func(0,-1,nums,n,dp);
    }
};
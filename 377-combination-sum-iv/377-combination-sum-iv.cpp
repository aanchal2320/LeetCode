class Solution {
public:
    int func(vector<int>&nums,int target,vector<int>&dp)
    {
        if(target==0)
        {
            return 1;
        }
        if(target<0)
        {
            return 0;
        }
        if(dp[target]!=-1)
        {
            return dp[target];
        }
         int ans=0;
        for(int i=0;i<nums.size();i++)
        {
           ans+=func(nums,target-nums[i],dp);
        }
        dp[target]=ans;
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        return func(nums,target,dp);
    }
};
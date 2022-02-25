class Solution {
public:
   bool helper(vector<int>& nums,int target,int idx,vector<vector<int>>& dp)
    {
        if(target == 0)
            return dp[idx][target] = true;
        else if(idx == nums.size())
            return dp[idx][target] = false;
        if(dp[idx][target] != -1)
            return dp[idx][target];
        if(nums[idx] <= target)
            return dp[idx][target] = (helper(nums,target-nums[idx],idx+1,dp)) ||                                                                                              (helper(nums,target,idx+1,dp));
        return dp[idx][target] = helper(nums,target,idx+1,dp);
    }

    bool canPartition(vector<int>& nums) {
        if(nums.size() < 2)
            return false;
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        if(sum%2 != 0)
            return false;
        // vector<vector<int>> temp(2);
        // vector<int> subsetSum(2,0);
        vector<vector<int>> dp(nums.size()+1,vector<int> (sum/2+1,-1));
        return helper(nums,sum/2,0,dp);
    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        // vector<int>dp(nums.size()+1,-1);
        // dp[0]=nums[0];
        // for(int i=1;i<nums.size();i++)
        // {
        //     int pick=nums[i];
        //     if(i>1)
        //     {
        //         pick+=dp[i-2];
        //     }
        //     int notpick=0+dp[i-1];
        //     dp[i]=max(pick,notpick);
        // }
        // return dp[nums.size()-1];
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<nums.size();i++)
        {
            int pick=nums[i];
            if(i>1)
            {
                pick+=prev2;
            }
            int notpick=0+prev;
            int curri=max(pick,notpick);
            prev2=prev;
            prev=curri;
        }
        return prev;
    }
};
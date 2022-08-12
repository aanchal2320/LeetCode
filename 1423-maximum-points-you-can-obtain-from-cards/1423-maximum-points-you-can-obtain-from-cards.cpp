class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int total_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            total_sum+=nums[i];
        }
        int left=0;
        int right=nums.size()-k;
        int window=0;
        if(nums.size()==k)
        {
            return total_sum;
        }
        for(int i=0;i<right;i++)
        {
            window+=nums[i];
        }
        int ans=total_sum-window;
        while(right<nums.size())
        {
            window-=nums[left++];
            window+=nums[right++];
            ans=max(total_sum-window,ans);
        }
        return ans;
    }
};
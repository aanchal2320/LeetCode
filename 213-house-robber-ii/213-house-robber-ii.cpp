class Solution {
public:
    int func(vector<int>&nums)
    {
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
    int rob(vector<int>& nums) {
        vector<int>temp1,temp2;
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
            {
                temp1.push_back(nums[i]);
            }
            if(i!=nums.size()-1)
            {
                temp2.push_back(nums[i]);
            }
        }
        return max(func(temp1),func(temp2));
    }
};
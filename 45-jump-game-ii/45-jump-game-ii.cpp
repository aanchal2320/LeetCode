class Solution {
public:
    int jump(vector<int>& nums) {
       if(nums.size()==0 || nums.size()==1)
           return 0;
        int curr=nums[0],maxreach=0,jumps=1;
        for(int i=1;i<nums.size()-1;i++)
        {
            maxreach=max(maxreach,nums[i]+i);
            if(curr==i)
            {
                jumps++;
                curr=maxreach;
            }
        }
        return jumps;
    }
};

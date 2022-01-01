class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int max_idx=0;
        for(int i=0;i<n;i++)
        {
            nums[nums[i]%n]+=n;
        }
        int curr_max=nums[0];
        for(int i=0;i<n;i++)
        {
           if(nums[i]>curr_max)
           {
               curr_max=nums[i];
               max_idx=i;
           }
        }
        return max_idx;
    }
};
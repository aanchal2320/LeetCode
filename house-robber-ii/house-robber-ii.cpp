class Solution {
public:
    int solve(vector<int>nums)
    {
        int n=nums.size();
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        nums[0]=nums[0];
        nums[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            nums[i]=max(nums[i-1],nums[i]+nums[i-2]);
        }
        return nums[n-1];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
       return max(solve(vector<int>(nums.begin(),nums.end()-1)),solve(vector<int>                                (nums.begin()+1,nums.end())));
    }
    
};
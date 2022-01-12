class Solution {
public:
    vector<vector<int>>ans;
    void permute(vector<int>nums,int idx)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            if(i!=idx && nums[i]==nums[idx])
                { 
                    continue;
                }   
            swap(nums[i],nums[idx]);
            permute(nums,idx+1);
        }
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        permute(nums,0);
        return ans;
    }
};
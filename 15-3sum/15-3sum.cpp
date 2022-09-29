class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
            return {};
        set<vector<int>>v;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size()-2;i++)
        {
            int low=i+1;
            int high=n-1;
            int a=(-1)*nums[i];
            while(low<high)
            {
            if(nums[low]+nums[high]==a)
            {
                v.insert({nums[i],nums[low],nums[high]});
                low++;
                high--;
            }
            else if(nums[low]+nums[high]<a)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        }
        vector<vector<int>>ans{v.begin(),v.end()};
        return ans;
    }
};
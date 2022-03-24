class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       if(nums.size()<3)
           return {};
        set<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1;
            int h=nums.size()-1;
            int a=(-1)*nums[i];
            while(l<h)
            {
            if((nums[l]+nums[h])==a)
            {
                v.insert({nums[i],nums[l],nums[h]});
                l++;
                h--;
            }
            else if((nums[l]+nums[h])<a)
            {
                l++;
            }
            else
            {
                h--;
            }
            }
        }
       vector<vector<int>> ans(v.begin(),v.end());
        return ans;
    }
};
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int k=nums[0];
        ans.push_back(k);
        for(int i=1;i<nums.size();i++)
        {
            k+=nums[i];
            ans.push_back(k);
        }
        return ans;
    }
};
class Solution {
public:
    void solve(vector<int>& nums,vector<int>&temp,vector<vector<int>>&ans,int ind)
    {
        if(ind>=nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        solve(nums,temp,ans,ind+1);
        temp.pop_back();
        solve(nums,temp,ans,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans;
      vector<int>temp;
        solve(nums,temp,ans,0);
        return ans;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int prod=1;
        for(int i=0;i<n;i++)
        {
            prod=prod*nums[i];
            ans.push_back(prod);
        }
        prod=1;
        for(int i=n-1;i>0;i--)
        {
            ans[i]=ans[i-1]*prod;
            prod*=nums[i];
        }
        ans[0]=prod;
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      int n=nums.size();
        vector<vector<int>>res;
        int count=pow(2,n);
        for(int i=0;i<count;i++)
        {
            vector<int>ans;
            for(int bits=0;bits<n;bits++)
            {
                if((i&(1<<bits))!=0)
                {
                    ans.push_back(nums[bits]);
                }
            }
            res.push_back(ans);
        }
       return res; 
    }
};
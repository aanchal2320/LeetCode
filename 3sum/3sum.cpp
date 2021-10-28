class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>h;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
              int sum=a+nums[l]+nums[r];
              if(sum==0)
              {
                  h.insert({a,nums[l],nums[r]});
                  l++;
                  r--;
              }
                else if(sum<0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
                    
            }
        }
        for(auto x: h)
        {
            ans.push_back(x);
        }
        return ans;
 }
};
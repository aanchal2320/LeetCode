class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        if(nums.size()==0)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int rem=target-(nums[i]+nums[j]);
                int left=j+1;
                int right=nums.size()-1;
                while(left<right)
                {
                    if(nums[left]+nums[right]==rem)
                    {
                        vector<int>ans(4,0);
                        ans[0]=nums[i];
                        ans[1]=nums[j];
                        ans[2]=nums[left];
                        ans[3]=nums[right];
                        res.push_back(ans);
                        
                        while(left<right && nums[left]==ans[2])
                        {
                            left++;
                        }
                        while(right>left && nums[right]==nums[3])
                        {
                            right--;
                        }
                    }
                    else if(nums[left]+nums[right]<rem)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
                while(j+1<nums.size() && nums[j+1]==nums[j])
                {
                    j++;
                }
            }
            while(i+1<nums.size() && nums[i+1]==nums[i])
            {
                i++;
            }
        }
        return res;
    }
};
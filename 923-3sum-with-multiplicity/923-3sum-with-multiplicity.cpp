class Solution {
public:
    int threeSumMulti(vector<int>&nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int res=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            int sum=target-nums[i];
            if(mp.find(sum)!=mp.end())
            {
                res=(res+mp[sum])%mod;
            }
            for(int j=0;j<i;j++)
            {
                mp[nums[i]+nums[j]]++;
            }
        }
        return res;
    }
};
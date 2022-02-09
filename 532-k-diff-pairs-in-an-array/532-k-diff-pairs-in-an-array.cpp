class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto x:mp)
        {
            if(k==0)
            {
               if(x.second>1)
               {
                   count++;
               }
            }
            else if(mp.find(x.first+k)!=mp.end())
            {
                count++;
            }
        }
        return count;
    }
};
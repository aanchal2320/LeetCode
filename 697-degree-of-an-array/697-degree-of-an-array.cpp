class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxi=0;
        for(auto x: mp)
        {
            if(maxi<x.second)
            {
                maxi=x.second;
            }
        }
        vector<int>v;
        for(auto x: mp)
        {
            if(x.second==maxi)
            {
                v.push_back(x.first);
            }
        }
        int res=INT_MAX;
        for(auto y: v)
        {
            int start=-1,end=-1;
            for(int i=0;i<nums.size();i++)
            {
                if(y==nums[i])
                {
                    start=i;
                    break;
                }
            }
            for(int j=nums.size()-1;j>=0;j--)
            {
                if(y==nums[j])
                {
                    end=j;
                    break;
                }
            }
            res=min(res,end-start+1);
        }
        return res;
    }
};
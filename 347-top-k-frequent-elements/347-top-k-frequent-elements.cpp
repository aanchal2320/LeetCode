class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        if(nums.size()==1)
        {
            v.push_back(nums[0]);
            return v;
        }
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto x: nums)
        {
            mp[x]++;
        }
       for(auto y:mp)
       {
           pq.push({y.second,y.first});
       }
        for(int i=0;i<k;i++)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
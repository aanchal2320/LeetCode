class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        if(nums.size()==1)
        {
            ans.push_back(nums[0]);
            return ans;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        for(int i=0;i<k;i++)
        {
           ans.push_back(pq.top().second);
           pq.pop();
        }
        return ans;
    }
};
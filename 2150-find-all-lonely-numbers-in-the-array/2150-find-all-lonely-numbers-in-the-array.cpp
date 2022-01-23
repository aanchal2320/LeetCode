class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
       unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> v;
        for(auto i:m)
        {
            if(i.second==1 && m.find(i.first+1)==m.end() && m.find(i.first-1)==m.end())                               {
                    v.push_back(i.first);
                  }
        }
        return v;

    }
};
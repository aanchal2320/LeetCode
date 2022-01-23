class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mp;
       int n=strs.size();
        string temp;
        for(int i=0;i<n;i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        vector<vector<string>>v;
        for(auto x=mp.begin();x!=mp.end();x++)
        {
            v.push_back(x->second);
        }
        return v;
    }
};
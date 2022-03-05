class Solution {
public:
    void solve(int x,vector<pair<int,int>>&v,unordered_map<int,int>&mp)
    {
        string s=to_string(x);
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int temp=mp[s[i]-'0'];
            ans=ans*10+temp;
        }
        v.push_back({ans,x});
    }
    static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.first<b.first;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>v;
        unordered_map<int,int>mp;
        for(int i=0;i<mapping.size();i++)
        {
            mp[i]=mapping[i];
        }
        vector<int>res;
        for(auto x: nums)
        {
            solve(x,v,mp);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x:v)
        {
            res.push_back(x.second);
        }
        return res;
    }
};
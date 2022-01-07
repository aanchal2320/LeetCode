class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        int count=0;
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(m.find(t[i])!=m.end())
            {
                if(m[t[i]]>0)
                {
                  m[t[i]]--;
                }
            }
        }
        for(auto i: m)
        {
            if(i.second>0)
                return false;
        }
        return true;
    }
};
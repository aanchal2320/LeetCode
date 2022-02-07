class Solution {
public:
    char findTheDifference(string s, string t) {
       int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans=ans^s[i];
        }
        for(int i=0;i<t.size();i++)
        {
            ans=ans^t[i];
        }
        return ans;
    }
};
class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.size();
        if(k==0)
            return n;
        if(s.size()==0 || k>s.size())
            return 0;
         unordered_map<char,int>mp;
        for(char x: s)
        {
            mp[x]++;
        }
        int j=0;
        while(j<n && mp[s[j]]>=k)
        {
            j++;
        }
        if(j==n)
            return n;
      return max(longestSubstring(s.substr(0,j),k),longestSubstring(s.substr(j+1,n),k));
    }
};
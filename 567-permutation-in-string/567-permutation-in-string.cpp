class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s1hash(26,0);
        vector<int>s2hash(26,0);
        int n=s1.size();
        int m=s2.size();
        if(n>m)
        {
            return false;
        }
        int l=0,r=0;
        int i;
        
        for(i=0;i<s1.size();i++)
        {
            s1hash[s1[i]-'a']++;
            s2hash[s2[i]-'a']++;
        }
    
       if(s1hash==s2hash) 
       {
           return true;
       }
        int prev=0; 
        int end=i; 
        
        while(end<s2.size())
        {
            s2hash[s2[prev]-'a']--;
            s2hash[s2[end]-'a']++;
        
            if(s1hash==s2hash) 
            {
                return true;
            }
            prev++;
            end++;
        }
        return false;
    }
};
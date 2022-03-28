class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int r=0,l=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                r++;
            }
            if(s[i]=='L')
            {
                l++;
            }
            if(r==l)
            {
                count++;
                r=0;
                l=0;
            }
        }
        return count;
    }
};
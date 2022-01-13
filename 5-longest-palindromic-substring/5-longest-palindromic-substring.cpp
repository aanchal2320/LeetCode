class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start=0,end=0;
        int max_len=1;
        for(int i=0;i<n;i++)
        {
            int l=i;
            int r=i;
            while(l>=0&&r<n)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            int len=r-l-1;
            if(len>max_len)
            {
                max_len=len;
                start=l+1;
                end=r-1;
            }
        }
         for(int i=0;i<n;i++)
        {
            int l=i;
             int r=i+1;
        while(l>=0&&r<n)
            {
                if(s[l]==s[r])
                {
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            int len=r-l-1;
            if(len>max_len)
            {
                max_len=len;
                start=l+1;
                end=r-1;
            }
         }
        return s.substr(start,max_len);
    }
};
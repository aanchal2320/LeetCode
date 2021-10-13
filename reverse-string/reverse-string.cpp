class Solution {
public:
    void reverseString(vector<char>& s) {
        int c=s.size();
        for(int i=0,j=c-1;i<=c/2,j>=c/2;i++,j--)
        {
                char t=s[j];
                s[j]=s[i];
                s[i]=t;
        }
    }
};
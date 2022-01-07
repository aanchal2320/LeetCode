class Solution {
public:
    int strStr(string h, string n) {
        if(n == "")
            return 0;
        
        int j = 0;
        
        for(int i = 0; i < h.size(); ++i)
        {
            if(h[i] == n[j])
                ++j;
            else
            {
                i -= j;
                j = 0;
            }
            
            if(j == n.size())
                return i - j + 1;
        }
        
        return -1;
    }
};
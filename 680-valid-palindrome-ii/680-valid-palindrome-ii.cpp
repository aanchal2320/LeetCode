class Solution {
public:
    bool flag = 0;
    bool validPalindrome(string s) {
        return helper(s, 0, s.size() - 1);
    }
    
    bool helper(string &s, int l, int r) {
        if(l >= r)
            return true;
        
        // same
        if(s[l] == s[r])
            return helper(s, l+1, r-1);
        // Not same for 2nd time
        if(flag)
            return false;
        // not same for first time
        flag = 1;
        return helper(s, l+1, r) || helper(s, l, r-1);
    }
};
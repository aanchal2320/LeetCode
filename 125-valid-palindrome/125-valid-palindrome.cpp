class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ")
            return true;
        int low=0;
        int high=s.size()-1;
        while(low<high)
        {
            while(low<high && isalnum(s[low])==0)
                low++;
            while(low<high && isalnum(s[high])==0)
                high--;
            if(tolower(s[low])!=tolower(s[high]))
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
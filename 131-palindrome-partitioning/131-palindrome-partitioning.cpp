class Solution {
public:
    void func(int index,string s,vector<string>&p,vector<vector<string>>&res)
    {
        if(index==s.size())
        {
            res.push_back(p);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            if(ispalindrome(s,index,i))
            {
                p.push_back(s.substr(index,i-index+1));
                func(i+1,s,p,res);
                p.pop_back();
            }
        }
    }
    bool ispalindrome(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>p;
        func(0,s,p,res);
        return res;
    }
};
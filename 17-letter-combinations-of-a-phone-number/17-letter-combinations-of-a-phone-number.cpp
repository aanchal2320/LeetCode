class Solution {
public:
    map<char,vector<string>>mp;
    vector<string>res;
    void helper(int start,string digits,string curr)
    {
        if(digits.size()==start)
        {
           res.push_back(curr);
        }
        vector<string> vec=mp[digits[start]];
        for(int i=0;i<vec.size();i++)
        {
            string s=vec[i];
            curr+=s;
            helper(start+1,digits,curr);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return res;
        
        mp['2']={"a","b","c"};
        mp['3']={"d","e","f"};
        mp['4']={"g","h","i"};
        mp['5']={"j","k","l"};
        mp['6']={"m","n","o"};
        mp['7']={"p","q","r","s"};
        mp['8']={"t","u","v"};
        mp['9']={"w","x","y","z"};
        
        helper(0,digits,"");
        return res;
    }
};
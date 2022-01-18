class Solution {
public:
    void allParentheses(int open, int closed, string v, vector<string> &ans) {
        if(open>closed || open<0 || closed<0)
            return;
        if(open==closed && open==0) {
            ans.push_back(v);
            return;
        }
        v+='(';
        allParentheses(open-1, closed, v, ans);
        v.pop_back();
        v+=')';
        allParentheses(open, closed-1, v, ans);
		v.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string v="";
        vector<string> ans;
        allParentheses(n,n,v,ans);
        return ans;
    }
    
};
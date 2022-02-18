class Solution {
public:
    string removeKdigits(string num, int k) {
       int n=num.size();
        stack<int>s;
        for(char c:num)
        {
            while(!s.empty() && k>0 && s.top()>c)
            {
                s.pop();
                k--;
            }
            if(!s.empty() || c!='0')
            {
                s.push(c);
            }
        }
        while(!s.empty() && k>0)
        {
            s.pop();
            k--;
        }
        if(s.empty())
        {
            return "0";
        }
        while(!s.empty())
        {
            num[n-1]=s.top();
            s.pop();
            n--;
        }
        return num.substr(n);
    }
};
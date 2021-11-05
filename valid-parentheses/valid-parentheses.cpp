class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        for(auto i:str)
        {
            if(i=='('||i=='['||i=='{')
            {
                s.push(i);
            }
            else
            {
                if(s.empty()||(s.top()=='('&&i!=')')||(s.top()=='{'&&i!='}')||                                     (s.top()=='['&&i!=']'))
                    return false;
                s.pop();
            }
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};
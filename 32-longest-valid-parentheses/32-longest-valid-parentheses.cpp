class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        int maxi=0;
        st.push(-1);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    maxi=max(maxi,i-st.top());
                }
            }
        }
        return maxi;
    }
};
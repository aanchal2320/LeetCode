class Solution {
public:
    int calPoints(vector<string>& ops) {
       stack<int>st;
        for(string x:ops)
        {
            if(x=="C")
            {
                st.pop();
            }
            else if(x=="D")
            {
               int val=st.top();
                val*=2;
                st.push(val);
            }
            else if(x=="+")
            {
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.push(val1);
                int add=val1+val2;
                st.push(add);
            }
            else
            {
                st.push(stoi(x));
            }
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
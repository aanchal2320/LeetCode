class Solution {
public:
    vector<int> dailyTemperatures(vector<int>&t) {
        int size=t.size();
        vector<int> ans(size,0);
        if(size<=1)
            return ans;
        stack<int>s;
        for(int i=size-1;i>=0;i--)
        {
            while(s.empty()==false && t[i]>=t[s.top()])
                        s.pop();
            if(s.empty()==false)
                ans[i]=s.top()-i;
            s.push(i);
        }
        return ans;
    }
};
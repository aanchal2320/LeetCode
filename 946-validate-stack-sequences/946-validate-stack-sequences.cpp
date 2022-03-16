class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int j=0;
        for(int p: pushed)
        {
            s.push(p);
        while(j<popped.size() && !s.empty() && s.top()==popped[j])
        {
            s.pop();
            j++;
        }
        }
       if(s.empty())
           return true;
        return false;
    }
};
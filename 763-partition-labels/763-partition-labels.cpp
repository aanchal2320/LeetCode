class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        vector<int>last_ind(26,0);
        for(int i=0;i<s.size();i++)
        {
            last_ind[s[i]-'a']=i;
        }
        int res=0;
        int left=0,right=0;
        for(int i=0;i<s.size();i++)
        {
            right=max(right,last_ind[s[i]-'a']);
            if(i==right)
            {
                ans.push_back(right-left+1);
                left=i+1;
            }
        }
        return ans;
    }
};
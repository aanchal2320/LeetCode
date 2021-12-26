class Solution {
public:
    vector<int> getRow(int r) {
        vector<int>ans(r+1,1); //initialize row of size r+1 with 1 
        for(int i=1;i<r;i++)
        {
            for(int j=i;j>0;j--)
            {
                ans[j]+=ans[j-1];
            }
        }
        return ans;
    }
};
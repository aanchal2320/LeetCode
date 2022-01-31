class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[0].size();j++)
            {
                sum=sum+accounts[i][j];
            }
            res=max(res,sum);
        }
        return res;
    }
};
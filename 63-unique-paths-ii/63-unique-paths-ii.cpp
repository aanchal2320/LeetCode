class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        int dp[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==1)
                {
                    dp[i][j]=0;
                }
                else if(i==0 && j==0)
                {
                    dp[i][j]=1;
                }
                else
                {
                    int up=0;
                    int left=0;
                    if(i>0)
                    {
                        up=dp[i-1][j];
                    }
                    if(j>0)
                    {
                        left=dp[i][j-1];
                    }
                    dp[i][j]=up+left;
                }
            }
        }
        return dp[m-1][n-1];
    }
};
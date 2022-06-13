class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       int n=triangle.size();
        //memoization
        // vector<vector<int>>dp(n,vector<int>(n,-1));
        // int ans=func(0,0,n,triangle,dp);
        // return ans;
        
        //dp solution
        int dp[n][n];
            for(int j=0;j<n;j++)
            {
                  dp[n-1][j]=triangle[n-1][j];
            }
         for(int i=n-2;i>=0;i--)
         {
             for(int j=i;j>=0;j--)
             {
                 int down=triangle[i][j]+dp[i+1][j];
                 int diagonal=triangle[i][j]+dp[i+1][j+1];
                 dp[i][j]=min(down,diagonal);
             }
         }
        return dp[0][0];
    }
};
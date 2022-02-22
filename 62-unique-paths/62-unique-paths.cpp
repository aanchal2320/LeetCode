class Solution {
public:
   int uniquePaths(int m, int n) {
       int dp[m][n];
       for(int i=0;i<=m-1;i++)
       {
           for(int j=0;j<=n-1;j++)
           {
               if(i==0 || j==0)
               {
                   dp[i][j]=1;
               }
               else
               {
                   if(i>0 && j>0)
                   {
                     dp[i][j]=dp[i-1][j]+dp[i][j-1];
                   }
               }
           }
       }
       return dp[m-1][n-1];
   }
};
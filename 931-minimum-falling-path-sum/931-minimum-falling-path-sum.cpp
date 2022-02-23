class Solution {
    int func(int i,int j,vector<vector<int>>& matrix, vector<vector<int>>&dp,int n,int m)
    {
        if(j<0 || j>m-1)
        {
            return 1e9;
        }
        if(i==0)
        {
            return matrix[0][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int straight=matrix[i][j]+func(i-1,j,matrix,dp,n,m);
        int left_diag=matrix[i][j]+func(i-1,j-1,matrix,dp,n,m);
        int right_diag=matrix[i][j]+func(i-1,j+1,matrix,dp,n,m);
        
        
        return dp[i][j]=min(straight,min(left_diag,right_diag));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int mini=INT_MAX;
        for(int j=0;j<m;j++)
        {
            mini=min(mini,func(n-1,j,matrix,dp,n,m));
        }
        return mini;
    }
};
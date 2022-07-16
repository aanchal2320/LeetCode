class Solution {
public:
    long int mod = 1e9+7;
   int utility(int m, int n, int max, int i, int j, vector<vector<vector<int>>>&dp)
    {
       
        if(i==m || j==n || i<0 || j<0)
            return 1;
    
        if(max<=0) 
            return 0;
       
        if(dp[i][j][max] != -1 ) return dp[i][j][max];
       
        int left = utility(m, n, max-1, i+1, j, dp);
        int right = utility(m, n, max-1, i, j+1, dp);
        int up = utility(m, n, max-1, i-1, j, dp);
        int down = utility(m, n, max-1, i, j-1, dp);
       
        return dp[i][j][max] = (left%mod + right%mod + up%mod + down%mod) % mod;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
       
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove+1, -1)));
        return utility(m, n, maxMove, startRow, startColumn, dp);
        
    }
};
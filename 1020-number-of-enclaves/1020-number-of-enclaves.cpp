class Solution {
public:
     void dfs(int r,int c,int n,int m,vector<vector<int>>&vis,vector<vector<int>>&grid)
  {
      int dr[4]={-1,0,+1,0};
      int dc[4]={0,+1,0,-1};
      vis[r][c]=1;
      for(int i=0;i<4;i++)
      {
          int newr=dr[i]+r;
          int newc=dc[i]+c;
          if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1 && !vis[newr][newc])
          {
              dfs(newr,newc,n,m,vis,grid);
          }
      }
  }
    int numEnclaves(vector<vector<int>> &grid) {
       int n=grid.size();
       int m=grid[0].size();
       vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<m;i++)
        {
            if(grid[0][i]==1 && !vis[0][i])
            {
                dfs(0,i,n,m,vis,grid);
            }
            if(grid[n-1][i]==1 && !vis[n-1][i])
            {
                dfs(n-1,i,n,m,vis,grid);
            }
        }
        
        
        for(int j=0;j<n;j++)
        {
            if(grid[j][0]==1 && !vis[j][0])
            {
                dfs(j,0,n,m,vis,grid);
            }
            if(grid[j][m-1]==1 && !vis[j][m-1])
            {
                dfs(j,m-1,n,m,vis,grid);
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
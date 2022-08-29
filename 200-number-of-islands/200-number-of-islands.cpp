class Solution {
public:
    void find(int i,int j,vector<vector<char>>&grid,int vis[][301],int m,int n)
    {
        if(i<0 || j<0 || i>=m || j>=n)
        {
            return;
        }
        else if(grid[i][j]=='0')
        {
            return;
        }
        else 
            if(!vis[i][j])
            {
                vis[i][j]=1;
                find(i+1,j,grid,vis,m,n);
                find(i,j+1,grid,vis,m,n);
                find(i-1,j,grid,vis,m,n);
                find(i,j-1,grid,vis,m,n);
            }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int vis[301][301];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                vis[i][j]=0;
            }
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                    find(i,j,grid,vis,m,n);
                    count++;
                }
            }
        }
        return count;
    }
};
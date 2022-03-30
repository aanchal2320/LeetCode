class Solution {
public:
    bool isvalid(int i,int j,int m,int n)
    {
        if(i>=0 && j>=0 && i<m && j<n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void find(vector<vector<int>>& grid,int m,int n,vector<vector<int>>&vis,int i,int j,int &curr)
    {
        vis[i][j]=1;
        if(isvalid(i-1,j,m,n) && !vis[i-1][j] && grid[i-1][j]==1)
        {
            curr++;
            find(grid,m,n,vis,i-1,j,curr);
        }
        if(isvalid(i,j+1,m,n) && !vis[i][j+1] && grid[i][j+1]==1)
        {
            curr++;
            find(grid,m,n,vis,i,j+1,curr);
        }
        if(isvalid(i+1,j,m,n) && !vis[i+1][j] && grid[i+1][j]==1)
        {
            curr++;
            find(grid,m,n,vis,i+1,j,curr);
        }
        if(isvalid(i,j-1,m,n) && !vis[i][j-1] && grid[i][j-1]==1)
        {
            curr++;
            find(grid,m,n,vis,i,j-1,curr);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=INT_MIN;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int curr=0;
                if(!vis[i][j] && grid[i][j]==1)
                {
                    curr=1;
                    find(grid,m,n,vis,i,j,curr);
                }
                 res=max(res,curr);
            }
        }
        return res;
    }
};
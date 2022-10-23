class Solution {
public:
    void bfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>&grid)
    {
        vis[i][j]=1;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int delrow=-1;delrow<=1;delrow++)
            {
                for(int delcol=-1;delcol<=1;delcol++)
                {
                    if(abs(delrow)==abs(delcol))
                    {
                        continue;
                    }
                    int nrow=row+delrow;
                    int ncol=col+delcol;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='1')
                    {
                        q.push({nrow,ncol});
                        vis[nrow][ncol]=1;
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }
};
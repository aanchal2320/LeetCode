class Solution {
public:
    void DFS(int i,int j,vector<vector<char>>&grid,int visited[][301])
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[i].size())
            return;
       else if(grid[i][j]=='0')
            return; 
       else
           if(visited[i][j]!=1)
        {
            visited[i][j]=1;
            DFS(i,j+1,grid,visited);
            DFS(i+1,j,grid,visited);
            DFS(i-1,j,grid,visited);
            DFS(i,j-1,grid,visited);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int visited[301][301];
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                visited[i][j]=0;
            }
        }
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(visited[i][j]==0 && grid[i][j]=='1')
                {
                    DFS(i,j,grid,visited);
                    count++;
                }
            }
        }
        return count;
    }
};
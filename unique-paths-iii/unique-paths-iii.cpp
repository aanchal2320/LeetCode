class Solution {
public:
    void findpath(vector<vector<int>>&grid,int x,int y,int m,int n,int count,int curr,int &total)
    {
        if(x>=m||y>=n||x<0||y<0||grid[x][y]==-1)
             return;
        if(grid[x][y]==2)
        {
            if(count==curr)
            {
                total++;
            }
            return;
        }
        grid[x][y]=-1;
        findpath(grid,x,y+1,m,n,count,curr+1,total);
        findpath(grid,x+1,y,m,n,count,curr+1,total);
        findpath(grid,x,y-1,m,n,count,curr+1,total);
        findpath(grid,x-1,y,m,n,count,curr+1,total);
        grid[x][y]=0;
        return;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int curr=0,count=0,total=0;
        int x,y;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    x=i;
                    y=j;
                }
                else if(grid[i][j]==0||grid[i][j]==2)
                {
                    count++;
                }
            }
        }
        findpath(grid,x,y,m,n,count,curr,total);
        return total;
    }
};
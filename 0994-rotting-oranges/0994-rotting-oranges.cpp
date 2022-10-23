class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cntfrsh=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                if(grid[i][j]==1)
                {
                    cntfrsh++;
                }
            }
        }
        int time=0;
        int dr[4]={-1,0,+1,0};
        int dc[4]={0,+1,0,-1};
        int count=0;
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int tm=q.front().second;
            q.pop();
            time=max(time,tm);
            for(int i=0;i<4;i++)
            {
                int newr=row+dr[i];
                int newc=col+dc[i];
                if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1 && vis[newr][newc]==0)
                {
                    q.push({{newr,newc},tm+1});
                    vis[newr][newc]=2;
                    count++;
                }
            }
        }
        if(count!=cntfrsh)
        {
            return -1;
        }
        return time;
    }
};
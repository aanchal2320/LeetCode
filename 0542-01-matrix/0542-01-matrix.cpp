class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>dist(n,vector<int>(m,0));
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int dr[4]={-1,0,+1,0};
        int dc[4]={0,+1,0,-1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int d=q.front().second;
            q.pop();
            dist[r][c]=d;
            for(int i=0;i<4;i++)
            {
                int newr=r+dr[i];
                int newc=c+dc[i];
                if(newr>=0 && newr<n && newc>=0 && newc<m && mat[newr][newc]==1 && !vis[newr][newc])
                {
                    q.push({{newr,newc},d+1});
                    vis[newr][newc]=1;
                }
            }
        }
        return dist;
    }
};
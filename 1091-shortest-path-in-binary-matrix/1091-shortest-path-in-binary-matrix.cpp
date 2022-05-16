class Solution {
public:
    bool isvalid(int r,int c,int m,int n,vector<vector<int>>&grid)
    {
        if(r>=0 && c>=0 && r<=m && c<=n && grid[r][c]==0)
        {
            return true;
        }
        return false;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)
        {
            return -1;
        }
        vector<vector<int>>v={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        int ans=0;
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        while(!q.empty())
        {
            int ls=q.size();
            ans++;
            for(int i=0;i<ls;i++)
            {
                pair<int,int>p= q.front();
                q.pop();
                if(p.first==m && p.second==n)
                {
                    return ans;
                }
                for(int j=0;j<v.size();j++)
                {
                    int r=p.first+v[j][0];
                    int c=p.second+v[j][1];
                    if(isvalid(r,c,m,n,grid))
                    {
                        q.push({r,c});
                        grid[r][c]=1;
                    }
                }
            }
        }
        return -1;
    }
};
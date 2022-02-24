class Solution {
public:
    int func(int i,int j1,int j2,int r,int c,vector<vector<int>>& grid,                                             vector<vector<vector<int>>>&memo)
    {
        if(j1<0 || j1>=c || j2<0 || j2>=c)
        {
            return -1e8;
        }
        if(memo[i][j1][j2]!=-1)
        {
            return memo[i][j1][j2];
        }
        if(i==r-1)
        {
            if(j1==j2)
            {
                return grid[i][j1];
            }
            else
            {
                return grid[i][j1]+grid[i][j2];
            }
        }
        int maxi=-1e8;
        for(int dj1=-1;dj1<=+1;dj1++)
        {
            for(int dj2=-1;dj2<=+1;dj2++)
            {
                int value=0;
                if(j1==j2)
                {
                    value=grid[i][j1];
                }
                else
                {
                    value=grid[i][j1]+grid[i][j2];
                }
                value+=func(i+1,dj1+j1,dj2+j2,r,c,grid,memo);
                maxi=max(maxi,value);
            }
        }
        return memo[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<vector<int>>>memo(r,vector<vector<int>>(c,vector<int>(c,-1)));
        return func(0,0,c-1,r,c,grid,memo);
    }
};
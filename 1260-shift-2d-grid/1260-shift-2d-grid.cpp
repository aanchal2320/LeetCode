class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       int m=grid.size();
       int n=grid[0].size();
       vector<vector<int>>temp(m,vector<int>(n,0));
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               int newindex=((i*n+j)+k)%(m*n);
               int newrow=newindex/n;
               int newcol=newindex%n;
               temp[newrow][newcol]=grid[i][j];
           }
       }
        return temp;
    }
};
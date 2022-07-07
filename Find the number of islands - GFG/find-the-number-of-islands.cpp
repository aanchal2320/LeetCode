// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i,int j,vector<vector<char>>&grid,int n,int m)
    {
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]=='0')
        {
            return;
        }
        grid[i][j]='0';
        dfs(i+1,j,grid,n,m);
        dfs(i-1,j,grid,n,m);
        dfs(i,j+1,grid,n,m);
        dfs(i,j-1,grid,n,m);
        dfs(i-1,j+1,grid,n,m);
        dfs(i-1,j-1,grid,n,m);
        dfs(i+1,j-1,grid,n,m);
        dfs(i+1,j+1,grid,n,m);
    }
    int numIslands(vector<vector<char>>& grid) {
       int m=grid.size();
       int n=grid[0].size();
       int count=0;
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(grid[i][j]=='1')
               {
                   dfs(i,j,grid,n,m);
                   count++;
               }
           }
       }
       return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends
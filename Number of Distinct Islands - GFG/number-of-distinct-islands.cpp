//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void dfs(int row,int col,vector<vector<int>>&vis,set<vector<pair<int,int>>>&s,vector<pair<int,int>>&vec,
            vector<vector<int>>& grid,int row0,int col0)
    {
        int n=grid.size();
        int m=grid[0].size();
        vec.push_back({row-row0,col-col0});
        vis[row][col]=1;
        int dr[4]={-1,0,+1,0};
        int dc[4]={0,+1,0,-1};
        for(int i=0;i<4;i++)
        {
            int newr=dr[i]+row;
            int newc=dc[i]+col;
            if(newr>=0 && newr<n && newc>=0 && newc<m && !vis[newr][newc] && grid[newr][newc]==1)
            {
                dfs(newr,newc,vis,s,vec,grid,row0,col0);
            }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    vector<pair<int,int>>vec;
                    dfs(i,j,vis,s,vec,grid,i,j);
                    s.insert(vec);
                }
            }
        }
        return s.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends
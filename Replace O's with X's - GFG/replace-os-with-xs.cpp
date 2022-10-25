//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(int r,int c,vector<vector<char>>&mat,int n,int m,vector<vector<int>>&vis)
    {
        int dr[4]={-1,0,+1,0};
        int dc[4]={0,+1,0,-1};
        vis[r][c]=1;
        for(int i=0;i<4;i++)
        {
            int newr=r+dr[i];
            int newc=c+dc[i];
            if(newr>=0 && newr<n && newc>=0 && newc<m && mat[newr][newc]=='O' && !vis[newr][newc])
            {
                dfs(newr,newc,mat,n,m,vis);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>>vis(n,vector<int>(m,0));
        //first row and last row
        for(int i=0;i<m;i++)
        {
            if(!vis[0][i] && mat[0][i]=='O')
            {
                dfs(0,i,mat,n,m,vis);
            }
            if(!vis[n-1][i] &&  mat[n-1][i]=='O')
            {
                dfs(n-1,i,mat,n,m,vis);
            }
        }
        //first column and last column
        for(int j=0;j<n;j++)
        {
            if(!vis[j][0] && mat[j][0]=='O')
            {
                dfs(j,0,mat,n,m,vis);
            }
            if(!vis[j][m-1] && mat[j][m-1]=='O')
            {
                dfs(j,m-1,mat,n,m,vis);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='O' && !vis[i][j])
                {
                    mat[i][j]='X';
                    vis[i][j]=1;
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
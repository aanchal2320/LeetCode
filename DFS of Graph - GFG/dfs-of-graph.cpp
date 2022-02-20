// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    void finddfs(int node,vector<int>&vis,vector<int>adj[],vector<int> &storedfs)
    {
        storedfs.push_back(node);
        vis[node]=1;
        for(auto x: adj[node])
        {
            if(!vis[x])
            {
                finddfs(x,vis,adj,storedfs);
            }
        }
    }
    public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>storedfs;
        vector<int>vis(V+1,0);
        // for(int i=1;i<=V;i++)
        // {
            if(!vis[0])
            {
                finddfs(0,vis,adj,storedfs);
            }
        // }
        return storedfs;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
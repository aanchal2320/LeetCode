// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
     vector<int>bfs;
     vector<int>vis(V+1,0);
        int s=0;
         if(!vis[s])
         {
             queue<int>q;
             q.push(s);
             vis[s]=1;
             while(!q.empty())
             {
                 int node=q.front();
                 q.pop();
                 bfs.push_back(node);
                 for(auto x: adj[node])
                 {
                     if(!vis[x])
                     {
                         q.push(x);
                         vis[x]=1;
                     }
                 }
             }
         }
     return bfs;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
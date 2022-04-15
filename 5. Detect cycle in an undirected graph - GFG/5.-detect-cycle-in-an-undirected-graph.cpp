// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  //public:
    bool checkCycle(int node,int V,vector<int>& vis,vector<int> adj[])
    {
        queue<pair<int,int>> q;
        vis[node]=1;
        q.push({node,-1});
        while(!q.empty())
        {
            int n=q.front().first;
            int prev=q.front().second;
            q.pop();
            for(auto x:adj[n])
            {
                if(!vis[x])
                {
                    vis[x]=1;
                    q.push({x,n});
                }
                else if(x!=prev)
                {
                   return true;
                }
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
               bool f=checkCycle(i,V,vis,adj);
               if(f)
               {
                   return true;
               }
            }
        }
        return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends
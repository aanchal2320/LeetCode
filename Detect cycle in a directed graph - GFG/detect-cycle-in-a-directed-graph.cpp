// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       queue<int>q;
       vector<int>indegree(V,0);
       int count=0;
       for(int i=0;i<V;i++)
       {
          for(auto it:adj[i])
          {
              indegree[it]++;
          }
       }
       for(int i=0;i<V;i++)
       {
           if(indegree[i]==0)
           {
               q.push(i);
           }
       }
       while(!q.empty())
       {
       int node=q.front();
       q.pop();
       count++;
       for(auto it:adj[node])
       {
           indegree[it]--;
           if(indegree[it]==0)
           {
               q.push(it);
           }
       }
    }
    if(q.empty() && count!=V)
    {
        return true;
    }
    return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends
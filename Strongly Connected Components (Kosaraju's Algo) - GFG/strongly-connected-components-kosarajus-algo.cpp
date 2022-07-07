// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs_of_rev(int ele,vector<int>rev[],vector<int>&vis2)
	{
	    vis2[ele]=1;
	    for(auto it:rev[ele])
	    {
	        if(!vis2[it])
	        {
	            dfs_of_rev(it,rev,vis2);
	            
	        }
	    }
	}
	void dfs(int node,vector<int>adj[],stack<int>&s,vector<int>&vis)
	{
	    
	    vis[node]=1;
	    for(auto it:adj[node])
	    {
	    if(!vis[it])
	    {
	        dfs(it,adj,s,vis);
	    }
	    
	    }
	    s.push(node);
	}
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int>s;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,s,vis);
            }
        }
        vector<int>rev[V];
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            {
                rev[it].push_back(i);
            }
        }
        int count=0;
        vector<int>vis2(V,0);
        while(!s.empty())
        {
            int ele=s.top();
            s.pop();
            if(!vis2[ele])
            {
                dfs_of_rev(ele,rev,vis2);
                count++;
            }
        }
      return count;  
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
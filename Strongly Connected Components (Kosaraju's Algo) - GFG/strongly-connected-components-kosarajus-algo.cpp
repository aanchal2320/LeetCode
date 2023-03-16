//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(int node,vector<vector<int>>& adj,vector<int>&vis,stack<int>&st)
	{
	    vis[node]=1;
	    for(auto it:adj[node])
	    {
	        if(!vis[it])
	        {
	            dfs(it,adj,vis,st);
	        }
	    }
	    st.push(node);
	}
	void dfs3(int node, vector<int>adjR[],vector<int>&vis)
	{
	    vis[node]=1;
	    for(auto it:adjR[node])
	    {
	        if(!vis[it])
	        {
    	        dfs3(it,adjR,vis);
	        }
	    }
	}
	int kosaraju(int V, vector<vector<int>>& adj)
    {
        stack<int>st;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis,st);
            }
        }
        //reverse the graph
        vector<int>adjR[V];
        for(int i=0;i<V;i++)
        {
            vis[i]=0;   // re-initalizing visited array since its already altered
            for(auto it:adj[i])
            {
                adjR[it].push_back(i);
            }
        }
        int ssc=0;
        while(!st.empty())
        {
            int node=st.top();
            st.pop();
            if(!vis[node])
            {
                ssc++;
                dfs3(node,adjR,vis);
            }
        }
        return ssc;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

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
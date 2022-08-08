class Solution {
public:
    bool iscycle(int curr,vector<int>&vis,vector<vector<int>>&adj)
    {
        if(vis[curr]==2)
        {
            return true;
        }
        vis[curr]=2;
        for(int i=0;i<adj[curr].size();i++)
        {
            if(vis[adj[curr][i]]!=1)
            {
                if(iscycle(adj[curr][i],vis,adj))
                {
                    return true;
                }
            }
        }
        vis[curr]=1;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int>vis(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                if(iscycle(i,vis,adj))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
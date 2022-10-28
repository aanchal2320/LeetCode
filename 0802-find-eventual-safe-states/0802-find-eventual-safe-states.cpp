class Solution {
public:
    bool dfs(int node,vector<int>&vis,vector<vector<int>>& graph,vector<int>&pathvis,vector<int>&check)
    {
        vis[node]=1;
        pathvis[node]=1;
        check[node]=0;
        for(auto it:graph[node])
        {
            if(!vis[it])
            {
                if(dfs(it,vis,graph,pathvis,check))
                {
                    check[node]=0;
                    return true;
                }
            }
            if(pathvis[it])
            {
                check[node]=0;
                return true;
            }
        }
        pathvis[node]=0;
        check[node]=1;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>ans;
        vector<int>vis(v,0);
        vector<int>pathvis(v,0);
        vector<int>check(v,0);
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,graph,pathvis,check);
            }
        }
        for(int i=0;i<v;i++)
        {
            if(check[i]==1)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
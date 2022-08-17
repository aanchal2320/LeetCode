class Solution {
public:
    bool isbi(int node,vector<vector<int>>&graph,vector<int>&color)
    {
        queue<int>q;
        q.push(node);
        color[node]=1;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(auto it:graph[curr])
            {
                if(color[it]==-1)
                {
                    color[it]=1-color[curr];
                    q.push(it);
                }
                else if(color[it]==color[curr])
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(!isbi(i,graph,color))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
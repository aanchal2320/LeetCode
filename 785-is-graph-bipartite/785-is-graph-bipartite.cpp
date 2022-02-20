class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        queue<int>q;
        vector<int>color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                color[i]=1;
                q.push(i);
            while(!q.empty())
            {
                int a=q.front();
                q.pop();
                for(auto x: graph[a])
                {
                    if(color[x]==-1)
                    {
                        color[x]=1-color[a];
                        q.push(x);
                    }
                    else if(color[x]==color[a])
                    {
                        return false;
                    }
                }
            }
        }
        }
        return true;
    }
};
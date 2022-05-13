class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                q.push(i);
                color[i]=1;
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
                        else if(color[a]==color[x])
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
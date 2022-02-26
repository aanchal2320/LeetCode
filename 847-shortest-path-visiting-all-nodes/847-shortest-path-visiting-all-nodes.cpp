class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
   int n = graph.size();
        if (n==1){
            return 0;
        }
        int endingMask = (1<<n) -1;
        vector<vector<bool>> seen(n, vector<bool>(endingMask));
        queue<vector<int>> q;
        for (int i=0;i<n;i++){
            q.push({i, 1<<i});
            seen[i][1<<i] = true;
        }
        int steps = 0;
        while(!q.empty()){
            queue<vector<int>> q1;
            while(!q.empty()){
                auto curr = q.front();
                q.pop();
                int node = curr[0];
                int mask = curr[1];
                for (int i : graph[node]){
                    int nextMask = mask | 1<<i;
                    if (nextMask == endingMask){
                        return 1+steps;
                    }
                    if (!seen[i][nextMask]){
                        seen[i][nextMask] = true;
                        q1.push({i,nextMask});
                    }
                }
            }
            steps++;
            swap(q,q1);
        }
        return 0;
    }
};
class Solution {
public:
    void rec(vector<vector<int>>& graph, vector<int>& curr, int i) {
        curr.push_back(i);
        if (i == graph.size()-1) res.push_back(curr);
        
        else {
            for (auto neighbor : graph[i])
                rec(graph, curr, neighbor);
        }
        
        curr.pop_back();
    }


    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> curr;
        rec(graph, curr, 0);
        return res;

    }
    private: 
    vector<vector<int>> res;
};
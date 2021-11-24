class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ans;
        for(int i = 0, j = 0; i < A.size() && j < B.size();){
            const int s = max(A[i][0], B[j][0]);
            const int e = min(A[i][1], B[j][1]);
            if(s <= e) ans.push_back({s, e});
            A[i][1] < B[j][1] ? i++ : j++;
        }
        return ans;
    }
};
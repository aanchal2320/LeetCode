class Solution {
public:
     vector<int> ans;
    void dfs(vector<vector<int>> &grid, int i, int j, int m, int n){
          if(i >= m) {ans.push_back(j); return;}
          int x = grid[i][j];
          if(x == 1){
               if(j == n-1) {
                   ans.push_back(-1); return;
               }
              
               if(j < n-1 && grid[i][j+1] == 1) dfs(grid,i+1,j+1,m,n);
               else if(j < n-1 && grid[i][j+1] == -1)  { ans.push_back(-1); return;}
          }
        else{
            if(j == 0) {
                   ans.push_back(-1); return;
               }
            
               if(j > 0 && grid[i][j-1] == -1) dfs(grid,i+1,j-1,m,n);
               else if(j > 0 && grid[i][j-1] == 1)  { ans.push_back(-1); return;}
        }
        
    }
    
    
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
       
        for(int i=0; i<n; i++){
            dfs(grid,0,i,m,n);
         }
        
        return ans;
        
    }
};
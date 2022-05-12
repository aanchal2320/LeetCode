class Solution {
public:
    bool dfs(int i, vector<int>&cur , vector<int>&visited)
    {
        visited[i]=1;
        cur[i]=1;
        for(auto x:edge[i])
        {
           if(!visited[x])
           {
               if (  dfs(x,cur,visited)==false )return false;
           }
           else if(cur[x])return false; 
            
            
        }
        cur[i]=0;
        return true;
    }
public:
      vector<vector<int>>edge;
      bool canFinish(int n, vector<vector<int>>& prerequisites) {
        
          
        edge.resize(n+1);
        for(auto x:prerequisites)
        {
            edge[x[0]].push_back(x[1]);
        }
    
         vector<int>visited(n+1,0);
         vector<int>cur(n+1,0);
          for(int i=0;i<n;i++){
           
            if(visited[i]==0)
            {
                 if(!dfs(i,cur,visited)) return false ;
            }
           
               
        }
        return true;
    }
};
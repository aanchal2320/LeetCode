class Solution {
public:
    void dfs(int sr,int sc, vector<vector<int>>&image, vector<vector<int>>&ans,
             int color,int dr[],int dc[],int initial)
    {
        int n=image.size();
        int m=image[0].size();
        ans[sr][sc]=color;
        for(int i=0;i<4;i++)
        {
            int nrow=dr[i]+sr;
            int ncol=dc[i]+sc;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]!=color && image[nrow][ncol]==initial)
            {
                ans[nrow][ncol]=color;
                dfs(nrow,ncol,image,ans,color,dr,dc,initial);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         vector<vector<int>>ans=image;
        int initial=image[sr][sc];
        int dr[]={-1,0,+1,0};
        int dc[]={0,+1,0,-1};
        dfs(sr,sc,image,ans,color,dr,dc,initial);
        return ans;
    }
};
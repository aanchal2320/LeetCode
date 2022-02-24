class Solution {
public:
   int dp[60][60][60][60];
    int find(vector<vector<int>>&mat,int r1,int c1,int r2,int c2)
    {
        if(r1>=mat.size()||c1>=mat[0].size()||r2>=mat.size()||c2>=mat[0].size()||mat[r1]                      [c1]==-1||mat[r2][c2]==-1)
        {
            return INT_MIN;
        }
        if(r1==mat.size()-1&&c1==mat[0].size()-1)
        {
            return mat[r1][c1];
        }
         if(r2==mat.size()-1&&c2==mat[0].size()-1)
        {
            return mat[r1][c1];
        }
        if(dp[r1][c1][r2][c2]!=-1)
        {
            return dp[r1][c1][r2][c2];
        }
        int c=0;
        if(r1==r2&&c1==c2)
        {
            c+=mat[r1][c1];
        }
        else
        {
            c+=mat[r1][c1]+mat[r2][c2];
        }
        int f1=find(mat,r1,c1+1,r2,c2+1);
        int f2=find(mat,r1+1,c1,r2+1,c2);
        int f3=find(mat,r1+1,c1,r2,c2+1);
        int f4=find(mat,r1,c1+1,r2+1,c2);
        c+=max({f1,f2,f3,f4});
        return dp[r1][c1][r2][c2]=c;
    }
    int cherryPickup(vector<vector<int>>& mat) 
    {
        memset(dp,-1,sizeof(dp));
        int n=mat.size();
        int m=mat[0].size();
        int val=find(mat,0,0,0,0);
        return max(0,val);
    }
};
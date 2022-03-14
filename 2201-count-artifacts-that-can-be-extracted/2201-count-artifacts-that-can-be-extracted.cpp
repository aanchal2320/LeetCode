class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        vector<vector<int>>v(n,vector<int>(n,0));
        for(auto it:dig)
        {
            v[it[0]][it[1]]=1;
        }
        int count=0;
        for(auto x:artifacts)
        {
            int x1=x[0];
            int x2=x[1];
            int y1=x[2];
            int y2=x[3];
            bool flag=true;
            for(int i=x1;i<=y1 and flag ;i++)
            {
                for(int j=x2;j<=y2;j++)
                {
                    if(v[i][j]==0)
                    {
                        flag=false;
                        break;
                    }
                }
            }
            count+=flag;
        }
        return count;
    }
};
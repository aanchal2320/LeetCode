class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        int first=1;
        for(int i=0;i<m;i++)
        {
            if(a[i][0]==0)
            {
                first=0;
            }
            for(int j=1;j<n;j++)
            {
                if(a[i][j]==0)
                {
                    a[0][j]=0;
                    a[i][0]=0;
                }
            }
        }
        for(int i=m-1;i>=0;i--)
         {
                for(int j=n-1;j>=1;j--)
                {
                    if(a[0][j]==0 || a[i][0]==0)
                        {
                            a[i][j]=0;
                        }
                }
            if(first==0)
            {
                 a[i][0]=0;
            }
        }
    }
};
class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        //transpose of matrix
        for(int i=0;i<m;i++)
        {
            for(int j=i;j<n;j++)
            {
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
        //reversing matrix
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            for(int i=0;i<n;i++)
            {
                int temp=a[i][low];
                a[i][low]=a[i][high];
                a[i][high]=temp;
            }
            low++;
            high--;
        }
    }
};
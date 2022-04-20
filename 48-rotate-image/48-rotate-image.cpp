class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(i!=j)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        int low=0;
        int high=n-1;
        while(low<high)
        {
          for(int i=0;i<n;i++)
          {
              swap(matrix[i][low],matrix[i][high]);
          }
            low++;
            high--;
        }
    }
};
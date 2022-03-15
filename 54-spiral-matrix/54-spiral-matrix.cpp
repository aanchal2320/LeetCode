class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     vector<int>v;
     int n=matrix.size();
     int m=matrix[0].size();
     int startR=0;
     int endR=n-1;
     int startC=0;
     int endC=m-1;
     while(startR<=endR && startC<=endC)
     {
        for(int i=startC;i<=endC;i++)
        {
            v.push_back(matrix[startR][i]);
        }
        for(int i=startR+1;i<=endR;i++)
        {
            v.push_back(matrix[i][endC]);
        }
        for(int i=endC-1;i>=startC;i--)
        {
            if(startR==endR)
            {
                break;
            }
            v.push_back(matrix[endR][i]);
        }
        for(int i=endR-1;i>=startR+1;i--)
        {
            if(startC==endC)
            {
                break;
            }
            v.push_back(matrix[i][startC]);
        }
         startR++;
         endR--;
         startC++;
         endC--;
     }
        return v;
    }
};
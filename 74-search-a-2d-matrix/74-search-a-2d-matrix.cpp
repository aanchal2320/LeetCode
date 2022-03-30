class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m=a.size();
        int n=a[0].size();
        int low=0;
        int high=(m*n)-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int r=mid/n;
            int c=mid%n;
            if(a[r][c]==target)
                return true;
            else if(a[r][c]>target)
                high=mid-1;
            else
                low=mid+1;
                
        }
        return false;
    }
};
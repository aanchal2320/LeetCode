class Solution {
public:
    bool issubset(int arr[], int sum , int n )
    {
       bool  t[n+1][sum+1];
     
        for(int i = 0;i<n+1;i++)
        {
            for(int j = 0; j<sum+1;j++)
            {
                if(i==0)
                    t[i][j] = false;
                if(j==0)
                    t[i][j]=true; 
                    
            }
        }
       
        
        for(int i = 1; i<n+1;i++)
        {
            for(int j = 1; j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                    t[i][j] = t[i-1][j-arr[i-1]]||t[i-1][j];
                else
                    t[i][j]= t[i-1][j];
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int arr[n] ; 
        int sum =0;
        for(int i = 0 ;i<n;i++)
          {  arr[i] = nums[i];
          sum+=arr[i];
          }
       
       if(sum&1)
           return false;
        else
            return issubset(arr, sum/2, n);
        
    }
};
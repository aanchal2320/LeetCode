class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low+1<n && nums[low]<=nums[low+1])
        {
            low++;
        }
        while(high-1>=0 && nums[high]>=nums[high-1])
        {
            high--;
        }
        if(low==n-1)
        {
            return 0;
        }
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=low;i<=high;i++)
        {
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        while(low-1>=0 && nums[low-1]>mini)
        {
            low--;
        }
        while(high+1<=n-1 && nums[high+1]<maxi)
        {
            high++;
        }
        return high-low+1;
    }
};
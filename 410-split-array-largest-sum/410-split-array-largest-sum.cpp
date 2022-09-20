class Solution {
public:
    int func(vector<int>&nums,int limit)
    {
        int sum=0;
        int count=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>limit)
            {
                sum=nums[i];
                count++;
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int m) {
        int low=INT_MIN,high=0;
        for(int i=0;i<nums.size();i++)
        {
            low=max(low,nums[i]);
            high+=nums[i];
        }
        int ans=low;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int n=func(nums,mid);
            if(n>m)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        if(nums[start]<nums[end])
        {
            return nums[0];
        }
        while(start<end)
        {
           int mid=start+(end-start)/2;
            if(nums[mid]>nums[end])
            {
                start=mid+1;
            }
            else if(nums[mid]<nums[start])
            {
                end=mid;
            }
            else
            {
                end--;
            }
        }
        return nums[end];
    }
};
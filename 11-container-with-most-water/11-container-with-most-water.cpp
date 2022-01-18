class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int max_height=0;
        while(left<right)
        {
           int left_height=nums[left];
           int right_height=nums[right];
           int mini=min(left_height,right_height);
           int area=(right-left)*mini;
           max_height=max(max_height,area);
           if(nums[left]<nums[right])
                left++;
           else
                right--;
        }
        return max_height;
    }
};
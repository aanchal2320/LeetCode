class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        int left=0,right=nums.size()-1,flag=0;
        while(left<=right)
        {
            if(nums[left]==target && nums[right]==target)
            {
                ans.push_back(left);
                ans.push_back(right);
                flag=1;
                break;
            }
            else if(nums[left]==target && nums[right]!=target)
            {
                 right--;
            }
            else if(nums[right]==target && nums[left]!=target)
            {
                left++;
            }
            else
            {
                left++;
                right--;
            }
        }
        if(flag==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};
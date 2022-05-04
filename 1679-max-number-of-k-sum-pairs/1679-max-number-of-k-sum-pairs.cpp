class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        int low=0,high=nums.size()-1;
        sort(nums.begin(),nums.end());
         while(low<high)
        {
            if(nums[low]+nums[high]==k)
            {
                count++;
                low++;
                high--;
            }
             else if(nums[low]+nums[high]<k)
             {
                low++;
             }
             else
             {
                 high--;
             }
        }
        return count;
    }
};
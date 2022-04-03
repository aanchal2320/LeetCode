class Solution {
public:
    //striver
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()<=1)
            return;
        int i=nums.size()-2;
        int j=nums.size()-1;
        while(i>=0 && nums[i]>=nums[i+1])
        {
            i--;
        }
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            while(nums[j]<=nums[i])
            {
                j--;
            }
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
        }
    }
};
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       int ans=0;
        if(n==3)
        {
            ans=nums[0]*nums[1]*nums[2];
        }
        else
        {
            int a=nums[0]*nums[1]*nums[n-1];
            int b=nums[n-1]*nums[n-2]*nums[n-3];
            ans=max(a,b);
        }
        return ans;
    }
};

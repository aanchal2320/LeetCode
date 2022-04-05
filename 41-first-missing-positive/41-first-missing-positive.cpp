class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool one=false;
        int n=nums.size();
        for(auto x: nums)
        {
            if(x==1)
            {
                one=true;
                break;
            }
        }
        if(!one)
        {
            return 1;
        }
        if(n==1)
        {
            return 2;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>n || nums[i]<=0)
            {
                nums[i]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            int x=abs(nums[i]);
            if(nums[x-1]>0)
            {
                nums[x-1]=(-1)*nums[x-1];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                return i+1;
            }
        }
        return n+1;
    }
};
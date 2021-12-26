class Solution {
public:
    
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int x=-1,y=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                x=i;
                break;
            }
        }
            if(x==-1)
            {
                reverse(nums.begin(),nums.end());
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                {
                    if(nums[j]>nums[x])
                    {
                        y=j;
                        break;
                    }
                }
                swap(nums[x],nums[y]);
                reverse(nums.begin()+x+1,nums.end());
            }
        }
};
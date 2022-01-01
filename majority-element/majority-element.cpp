class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=nums[0],count=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(res==nums[i])
            {
               count++;
            }
            else 
            {
                count--;
          if(count==0)
            {
                res=nums[i];
                count=1;
            }
        }
        }
        count=0;
        for(int i=0;i<n;i++)
        {
            if(res==nums[i])
                count++;
        }
        if(count<=n/2)
        {
            res=-1;
        }
        return res;
    }
};
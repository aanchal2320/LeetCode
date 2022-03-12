class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0,max_len=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            while(count>k)
            {
                if(nums[start++]==0)
                {
                    count--;
                }
            }
            max_len=max(max_len,i-start+1);
        }
        return max_len;
    }
};
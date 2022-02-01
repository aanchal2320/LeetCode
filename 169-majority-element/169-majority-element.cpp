class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0,count=0;
        for(int i: nums)
        {
            if(count==0)
            {
                ans=i;
            }
            if(i==ans)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return ans;
    }
};
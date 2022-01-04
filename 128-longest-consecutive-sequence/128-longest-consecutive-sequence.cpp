class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int c=0;
        int n=nums.size();
        for(int i:nums)
        {
            s.insert(i);
        }
        for(int i:nums)
        {
            if(s.count(i-1)==0)
            {
                int curr=i;
                int curr_count=1;
                while(s.count(curr+1)==1)
                {
                    curr+=1;
                    curr_count+=1;
                }
                c=max(c,curr_count);
            }
        }
        return c;
    }
};
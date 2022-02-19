class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                s.insert(nums[i]*2);
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        int min_deviation=INT_MAX;
        while(true)
        {
            int deviation=(*(s.rbegin())-*(s.begin()));
            min_deviation=min(min_deviation,deviation);
            int max_val=*(s.rbegin());
            if(max_val%2==0)
            {
                s.erase(max_val);
                s.insert(max_val/2);
            }
            else
            {
                break;
            }
        }
        return min_deviation;
    }
};


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>h;
        int n=nums.size();
       for(int i=0;i<n;i++)
       {
           h[nums[i]]++;
       }
        for(auto x: h)
            if(x.second==1)
                return x.first;
            return -1;
        
    }
};

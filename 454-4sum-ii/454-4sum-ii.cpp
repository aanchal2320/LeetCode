class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums3.size();i++)
        {
            for(int j=0;j<nums4.size();j++)
            {
                mp[nums3[i]+nums4[j]]++;
            }
        }
        for(int i: nums1)
        {
            for(int j:nums2)
            {
                count+=mp[0-(i+j)];
            }
        }
        return count;
    }
};
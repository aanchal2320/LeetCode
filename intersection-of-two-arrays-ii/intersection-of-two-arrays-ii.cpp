class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_map<int,int>m;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(auto i: nums2)
        {
            if(m[i]>0)
            {
                res.push_back(i);
                m[i]--;
            }
        }
        return res;
    }
};
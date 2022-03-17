class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        multimap<int,int>mp;
        for(int i=0;i<points.size();i++)
        {
            mp.insert({points[i][0]*points[i][0]+points[i][1]*points[i][1],i});
        }
        int j=0;
        for(auto x=mp.begin();j<k;x++)
        {
                ans.push_back(points[x->second]);
                j++;
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
        {
            return intervals;
        }
        vector<vector<int>>v;
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        for(auto x:intervals)
        {
           if(x[0]<=temp[1])
           {
               temp[1]=max(temp[1],x[1]);
           }
            else
            {
                v.push_back(temp);
                temp=x;
            }
        }
        v.push_back(temp);
        return v;
    }
};
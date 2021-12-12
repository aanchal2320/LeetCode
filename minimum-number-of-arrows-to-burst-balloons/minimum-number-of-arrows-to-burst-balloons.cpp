class Solution {
public:
    static bool sortbysec(vector<int>&a,vector<int>&b)
    {
        return(a[1]<b[1]);
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)
            return 0;
        if(points.size()==1)
            return 1;
        sort(points.begin(),points.end(),sortbysec);
        int prev=points[0][1];
        int res=1;  //arrow needed
        for(int curr=1;curr<points.size();curr++)
        {
            if(points[curr][0]<=prev)  //overlapping
                continue;
            else
                res++;
                prev=points[curr][1];
        }
     return res;
    }
};
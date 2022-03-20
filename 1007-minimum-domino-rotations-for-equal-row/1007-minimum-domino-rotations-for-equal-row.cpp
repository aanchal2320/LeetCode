class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        unordered_map<int,int>a;
        unordered_map<int,int>b;
        unordered_map<int,int>same;
        for(int i=0;i<n;i++)
        {
            a[tops[i]]++;
            b[bottoms[i]]++;
            if(tops[i]==bottoms[i])
            {
                same[tops[i]]++;
            }
        }
        int mini=-1;
        for(int i=0;i<7;i++)
        {
            if((a[i]+b[i]-same[i])==n)
            {
               return n-max(a[i],b[i]);
            }
        }
        return -1;
    }
};

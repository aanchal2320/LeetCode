class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        if(n==1)
        {
            return 1;
        }
        vector<int>candy(n,1);
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1] && candy[i]<=candy[i-1])
            {
                candy[i]=candy[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1] && candy[i]<=candy[i+1])
            {
                candy[i]=candy[i+1]+1;
            }
        }
        int totalcandy=0;
        for(int i=0;i<candy.size();i++)
        {
            totalcandy+=candy[i];
        }
        return totalcandy;
    }
};
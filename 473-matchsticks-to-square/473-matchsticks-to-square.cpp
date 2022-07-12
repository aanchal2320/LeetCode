class Solution {
public:
    bool dfs(vector<int>&matchsticks,int target,vector<int>&sides,int ind)
    {
        if(ind==matchsticks.size())
        {
            if(sides[0]==sides[1] && sides[1]==sides[2] && sides[2]==sides[3])
            {
                return true;
            }
            return false;
        }
        for(int i=0;i<4;i++)
        {
            if(sides[i]+matchsticks[ind]>target)
            {
                continue;
            }
        int j=i-1;
        while(j>=0)
        {
            if(sides[j]==sides[i])
            {
                break;
            }
            j=j-1;
        }
        if(j!=-1)
        {
            continue;
        }
        sides[i]+=matchsticks[ind];
        if(dfs(matchsticks,target,sides,ind+1))
        {
            return true;
        }
        sides[i]-=matchsticks[ind];
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
       if(matchsticks.size()==0)
           return false;
        int sum=0;
        for(int i=0;i<matchsticks.size();i++)
        {
            sum+=matchsticks[i];
        }
        int target=sum/4;
        vector<int>sides(4);
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        return dfs(matchsticks,target,sides,0);
    }
};
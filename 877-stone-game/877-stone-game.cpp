class Solution {
public:
    int memo[501][501];
    int func(int i,int j,vector<int>&piles)
    {
        if(i>j)
            return 0;
        if(memo[i][j]!=0)
            return memo[i][j];
        return memo[i][j]=max(piles[i]-func(i+1,j,piles),piles[j]-func(i,j-1,piles));
    }
    bool stoneGame(vector<int>& piles) {
       int n=piles.size();
    return func(0,n-1,piles)>0;
    }
};
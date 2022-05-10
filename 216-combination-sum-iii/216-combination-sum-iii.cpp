class Solution {
public:
     vector<vector<int>>ans;
    int sum(vector<int>&res)
    {
        int ans=0;
        for(auto x: res)
        {
            ans+=x;
        }
        return ans;
    }
    void helper(int k,int n,vector<int>&res,int num)
    {
        if(k==0)
        {
            if(sum(res)==n)
            {
                ans.push_back(res);
            }
            return;
        }
        if(num>9)
        {
            return;
        }
        res.push_back(num);
        helper(k-1,n,res,num+1);
        res.pop_back();
        helper(k,n,res,num+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int>res;
       helper(k,n,res,1);
        return ans;
    }
};
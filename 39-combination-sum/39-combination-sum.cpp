class Solution {
public:
void combinations(int i,int target,vector<int>&candidates,vector<vector<int>>&res,vector<int>&a)
    {
        if(i==candidates.size())
        {
            if(target==0)
            {
                res.push_back(a);
            }
            return;
        }
    if(candidates[i]<=target)
    {
        a.push_back(candidates[i]);
        combinations(i,target-candidates[i],candidates,res,a);
        a.pop_back();
    }
    combinations(i+1,target,candidates,res,a);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>a;
        combinations(0,target,candidates,res,a);
        return res;
    }
};
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
         int n=nums.size();
        map<int,int>ev;
        map<int,int>od;
        int cd=0,ce=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                ev[nums[i]]++;
                ce++;
            }
            else
            {
                cd++;
                od[nums[i]]++;
            }
        }
        int count1 =0,fv=0,count2 =0;
        int res=INT_MAX,ans=INT_MAX;
        for(auto i:ev)
        {
            if(i.second>count1)
            {
                count1=i.second;
                fv=i.first;
            }
        }
        for(auto i:od)
        {
            if(i.first!=fv&&i.second>count2)
            {
                count2=i.second;
            }
        }
        res=(ce-count1)+(cd-count2);
        count1=0,count2=0,fv=0;
        for(auto i:od)
        {
            if(i.second>count1)
            {
                count1=i.second;
                fv=i.first;
            }
        }
        for(auto i:ev)
        {
            if(i.first!=fv&&i.second>count2)
            {
                count2=i.second;
            }
        }
        ans=(ce-count1)+(cd-count2);
        return min(ans,res);
        
    }
};
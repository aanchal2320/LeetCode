class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_sum=0,cost_sum=0;
        for(int i=0;i<gas.size();i++)
        {
            gas_sum+=gas[i];
            cost_sum+=cost[i];
        }
        if(gas_sum<cost_sum)
        {
            return -1;
        }
        int currsum=0,ans=0;
        for(int i=0;i<gas.size();i++)
        {
            currsum+=(gas[i]-cost[i]);
            if(currsum<0)
            {
                currsum=0;
                ans=i+1;
            }
        }
        return ans;
    }
};
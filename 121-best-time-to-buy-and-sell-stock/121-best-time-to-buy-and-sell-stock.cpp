class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minval=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
           minval=min(minval,prices[i]);
           profit=max(profit,(prices[i]-minval));
        }
        return profit;
    }
};
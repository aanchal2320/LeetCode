class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int profit=0;
        for(int j=1;j<prices.size();j++)
        {
            if(prices[j]>prices[j-1])
            {
                profit+=(prices[j]-prices[j-1]);
            }
        }
        return profit;
    }
};
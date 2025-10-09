class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int purchasePrice = prices[0];
        int profit = 0;
        for(int sellingDay = 0x01; sellingDay < prices.size(); sellingDay++)
        {
            purchasePrice = min(purchasePrice, prices[sellingDay]);
            profit = max(profit, prices[sellingDay] - purchasePrice );
        }

        return profit;
    }
};
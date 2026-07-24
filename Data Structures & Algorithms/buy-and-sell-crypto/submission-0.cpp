class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minIndex = 0;
        for (int i = 1; i < prices.size(); i++){
            profit = max(profit, prices[i] - prices[minIndex]);
            if (prices[minIndex] > prices[i]) {
                minIndex = i;
            }
        }
        return profit;
    }
};

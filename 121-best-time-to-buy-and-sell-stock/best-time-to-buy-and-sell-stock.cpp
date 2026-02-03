class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minP = INT_MAX;
        int profit = 0;
        int maxProfit = 0;

        for(int i = 0; i<n; i++){
            minP = min(prices[i],minP);
            profit = prices[i] - minP;
            maxProfit = max(profit,maxProfit);
        }
        return maxProfit;
    }
};
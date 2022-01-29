class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMax = 0, profit = 0;
        for(int i=0; i<prices.size()-1; i++){
            currMax += prices[i+1]-prices[i];
            currMax = max(0, currMax);
            profit = max(profit, currMax);
        }
        return profit;
    }
};
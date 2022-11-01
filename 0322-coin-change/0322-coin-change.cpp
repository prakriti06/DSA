class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1);
        for(int i = 0; i < dp.size(); i++){
            dp[i] = amount+1;
        }
        dp[0] = 0;
        for(int i = 0; i <= amount; i++){
            for(int coin : coins){
                if(i-coin < 0){
                    continue;
                }
                dp[i] = min(dp[i-coin]+1, dp[i]);
            }
        }
        return dp[amount] == amount+1 ? -1 : dp[amount];
    }
};
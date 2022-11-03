class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum & 0x01) 
            return false;
        sum >>= 1;

        vector<bool> dp(sum+1, false);
        dp[0] = true;
        for(auto const& n : nums) {
            for(int s = sum-n, s2 = sum; s >= 0; --s, --s2) {
                if(dp[s]&& !dp[s2])
                    dp[s2] = true;
            }
            if(dp.back())
                return true;
        }
        return false;
    }
};
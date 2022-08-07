class Solution {
public:
    int countVowelPermutation(int n) {
        long long dp[5],dp1[5],mod=1e9+7;
        for(int i=0;i<5;++i)dp[i]=1;
        for(int i=1;i<n;++i){
            dp1[0]=(dp[4]+dp[1]+dp[2])%mod;
            dp1[1]=(dp[0]+dp[2])%mod;
            dp1[2]=(dp[1]+dp[3])%mod;
            dp1[3]=dp[2];
            dp1[4]=(dp[3]+dp[2])%mod;
            for(int j=0;j<=4;++j)
                dp[j]=dp1[j];
        }
        return (dp[0]+dp[1]+dp[2]+dp[3]+dp[4])%mod;
    }
};
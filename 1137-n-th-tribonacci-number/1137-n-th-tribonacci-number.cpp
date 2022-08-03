class Solution {
public:
    int tribonacci(int n) {
        if(n<=1)
            return n;
        if(n == 2)
            return 1;
        
        int t1 = 0, t2 = 1, t3 = 1;
        int res;
        for(int i=3; i<=n; i++){
            res = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = res;
        }
        return res;
    }
};
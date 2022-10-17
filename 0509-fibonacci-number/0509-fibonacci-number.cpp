class Solution {
public:
    int fib(int n) {
           if(n <= 1){
            return n;
        }
        
        int prev = 0, prev2 = 1;
        int curr;
        
        for(int i = 2;i <= n;i++){
            curr = prev + prev2;
            prev = prev2;
            prev2 = curr;
        }
        
        return curr;
    }
};
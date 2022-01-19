class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)
            return true;
        if(n==0)
            return false;
        if(n%3==0){
            int t = isPowerOfThree(n/3);
            if(t==1)
                return true;
        }
        return false;
    }
};
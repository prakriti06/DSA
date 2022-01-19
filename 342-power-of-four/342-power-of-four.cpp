class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        if(n%4==0){
            int t = isPowerOfFour(n/4);
            if(t==1)
                return true;
        }
        return false;
    }
};
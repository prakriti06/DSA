class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        if(n==0)
            return false;
        if(n%2==0){
        int temp = isPowerOfTwo(n/2);
        if(temp==1)
            return true;
        }
        return false;
    }
};
class Solution {
public:
    bool judgeSquareSum(int c) {
        int s = 0;
        long int e = sqrt(c);
        while(s <= e){
            if(s*s + e*e == c)
                return true;
            else if(s*s + e*e < c)
                s++;
            else
                e--;
        }
        return false;
    }
};
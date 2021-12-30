class Solution {
public:
    int arrangeCoins(int n) {
        long int s=1, e=n, mid;
        while(s<=e){
            mid = s+(e-s)/2;
            if(n<mid*(mid+1)/2)
                e=mid-1;
            else if(n>mid*(mid+1)/2)
                s=mid+1;
            else
                return mid;
        }
        return e;
    }
};
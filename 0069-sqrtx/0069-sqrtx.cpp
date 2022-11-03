class Solution {
public:
    int mySqrt(int x) {
        int l=0, r=x/2;
        long int mid;
        if(x==1)
            return 1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                r=mid-1;
            
            else
                l=mid+1;
        }
        return r;
    }
};
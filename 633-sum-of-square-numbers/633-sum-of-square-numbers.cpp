class Solution {
public:
     bool Square(int a) { 
        long int l=1, h=a, mid;
        while(l<=h){
            mid = l+(h-l)/2;
            if(mid*mid == a)
                return true;
            else if(mid*mid>a)
                h = mid-1;
            else 
                l = mid+1;
        }
        return false;
     }
    
    bool judgeSquareSum(int c) {
        if(c==1||c==0)
            return true;
       for(long int i=0; i*i<=c; i++){
          long int b = i*i;
           if(Square(c-b))
               return true;
       }
        return false;
    }
};
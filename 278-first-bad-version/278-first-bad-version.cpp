// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int e=n, s=1, ans;
        long int mid;
        while(s<=e){
            mid=(s+e)/2;
            if(isBadVersion(mid)){
                ans= mid;
                e=mid-1;
            }
            else 
                s=mid+1;
        }
        return ans;
    }
};
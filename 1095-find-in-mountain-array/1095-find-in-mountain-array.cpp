class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int start = 0;
        int end = mountainArr.length() - 1;
        
        while (start < end) {
            int mid = (start + end) >> 1;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                start = mid + 1;
            else
                end = mid;
        }
        if (target == mountainArr.get(end))
            return end;
        auto lRes = bSearchL(target, mountainArr, 0, end - 1);
        return lRes == -1 ? bSearchR(target, mountainArr, end + 1, mountainArr.length() - 1) : lRes;
    }
    
    int bSearchL(int target, MountainArray &mountainArr, int s, int l) {
        int start = s;
        int end = l;
        
        while (start <= end) {
            int mid = (start + end) >> 1;
            int cVal = mountainArr.get(mid);
            if (target == cVal)
                return mid;
            if (cVal > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }
    
    int bSearchR(int target, MountainArray &mountainArr, int s, int l) {
        int start = s;
        int end = l;;
        
        while (start <= end) {
            int mid = (start + end) >> 1;
            int cVal = mountainArr.get(mid);
            if (target == cVal)
                return mid;
            if (cVal > target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
};
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int start=0, end=arr.size()-1;
        int mid; 
        int ans;
        while(start <= end) {      
             mid = (start+end)/2; 
            if(arr[mid] < arr[mid+1]) 
                start = mid + 1; 
            else {
                ans = mid;
                end = mid-1; 
            }
        }
        return ans;
    }
};
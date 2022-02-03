class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        while(i<nums2.size()){
            nums1.push_back(nums2[i++]);
        }
        sort(nums1.begin(), nums1.end());
        double med;
        int mid = (0+nums1.size()-1)/2;
        if(nums1.size()%2 != 0){
            med = nums1[mid];
        }
        else {
            med = (nums1[mid] + nums1[mid+1])/2.0;
        }
        return med;
    }
};
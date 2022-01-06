class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
      
        while(l<=r){
            nums[l] = nums[l]*nums[l];
            l++;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
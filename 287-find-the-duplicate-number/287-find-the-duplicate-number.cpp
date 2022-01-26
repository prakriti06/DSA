class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int idx = 0;
        while (nums[idx] > 0) {
            nums[idx] *=-1 ;
            idx = -nums[idx];
        }
        return idx;
    }
};

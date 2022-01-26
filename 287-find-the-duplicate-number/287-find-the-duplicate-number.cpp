class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         while (true) {
            if (nums[0] != nums[nums[0]]) \
               swap(nums[0], nums[nums[0]]);
            else return nums[0];
        }
    }
};

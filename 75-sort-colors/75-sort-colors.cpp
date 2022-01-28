class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = 0, k = nums.size() - 1;
    for (int i = 0; i <= k; ++i){
        if (nums[i] == 0 && i != j)
            swap(nums[i--], nums[j++]);
        else if (nums[i] == 2 && i != k)
            swap(nums[i--], nums[k--]);
            }
    }
};
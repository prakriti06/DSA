class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        for (int i = 0, j = n, idx = 0; idx < 2*n; i++, j++) {
            ans[idx++] = nums[i];
            ans[idx++] = nums[j];
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> vis;
        unordered_map<int,int> vmap;
        for (int i = 0; i < nums.size(); i++) {
            if (vmap.count(target-nums[i])) {
                return {vmap[target-nums[i]], i};
            }
            vmap[nums[i]] = i;
        }
        return {};
    }
};
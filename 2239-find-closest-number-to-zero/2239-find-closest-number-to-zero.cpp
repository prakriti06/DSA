class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int diff = INT_MAX, ans = INT_MAX;
        for (int i : nums) {
            if (abs(i) < diff || (abs(i) == diff && i > ans)) {
                diff = abs(i);
                ans = i;
            } 
        }
        return ans;
    }
};
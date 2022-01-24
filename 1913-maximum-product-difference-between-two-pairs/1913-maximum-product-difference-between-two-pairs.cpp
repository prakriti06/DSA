class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int product1 =  nums[0]*nums[1];
        int product2 = nums[nums.size()-1]*nums[nums.size()-2];
        
        return product2 - product1;
    }
};
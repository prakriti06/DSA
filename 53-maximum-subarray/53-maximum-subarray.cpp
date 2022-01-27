class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sub_sum = INT_MIN, sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            sub_sum = max(sub_sum, sum);
            if(sum < 0)
                sum = 0;
            
        }
        return sub_sum;
    }
};
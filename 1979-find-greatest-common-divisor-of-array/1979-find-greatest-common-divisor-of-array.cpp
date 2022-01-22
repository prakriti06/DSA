class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0], max = nums[0];
        for(auto n: nums)
        {
            if(n > max) 
                max = n;
            if(n < min) 
                min = n;
        }
        
        int ans = 1;
        for(int i = 2; i <= max; i++)
        {
            if((min % i == 0) && (max % i == 0)) 
                ans = i;
        }
        return ans;
    }
};
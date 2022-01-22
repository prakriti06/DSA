class Solution {
public:
    int gcd(int a,int b)
    {
        if(b==0)
            return a;
        
        return gcd(b,a % b);
    }
    
    int findGCD(vector<int>& nums) {
        int maxNo = nums[0];
        int minNo = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>maxNo)
                maxNo = nums[i];
            if(nums[i]<minNo)
                minNo = nums[i];
        }
        return gcd(maxNo, minNo);
    }
};
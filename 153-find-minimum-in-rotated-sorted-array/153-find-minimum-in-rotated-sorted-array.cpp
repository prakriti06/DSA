class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1])
            return nums[0];
        
        int start = 0, end = nums.size()-1;
        int mid;
        while(start<end){
            mid = (start+end)/2;
            if(nums[mid]>=nums[0])
                start = mid+1;
            else if(nums[mid]<nums[0]){
                if(nums[mid]>nums[mid-1])
                    end = mid;
                else 
                    return nums[mid];
            }
                
        }
        return nums[start];
    }
};
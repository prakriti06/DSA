class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1, mid;
        while(l<r) {
            mid = l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            
            else if(nums[mid]>=nums[0]) {
                if((nums[mid]>target)&&(nums[0]<=target))
                    r = mid-1;
                else
                    l = mid+1;
            }
                    
            else {
                if((nums[nums.size()-1]>=target)&&(nums[mid]<target))
                    l = mid+1;
                else 
                    r = mid-1;
            }
           
        }
        return target==nums[l] ? l : -1 ;
    }
};


 
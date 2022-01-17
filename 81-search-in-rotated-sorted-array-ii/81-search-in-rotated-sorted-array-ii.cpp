class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target)
                return true;
            
             if((nums[mid] == nums[start])&&(nums[mid]==nums[end])){
                   start++;
                 end--;
             }
            
             else if(nums[mid]>=nums[start]){
                 if((nums[mid]>target)&&(target>=nums[start]))
                    end = mid-1;
                 else  
                    start = mid+1;
             }
           
             else{
                 if((nums[mid]<target)&&(target<=nums[nums.size()-1]))
                     start = mid+1;
                 else 
                     end = mid-1;
                   
            }
        }
    return false;
    }
};
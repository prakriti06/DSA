class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPr = nums[0], minPr = nums[0];
	    int ans = nums[0];
	    for(int i=1; i<nums.size(); i++){
	        if(nums[i]<0)
	           swap(maxPr, minPr);
	        maxPr = max(nums[i], nums[i]*maxPr);
	        minPr = min(nums[i], nums[i]*minPr);
	        
	        ans =  max(maxPr, ans);
	    }
	    return ans;
    }
};
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>numsCopy;
        numsCopy=nums;
        sort(numsCopy.begin(),numsCopy.end());
        int start=-1,end=-1;
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=numsCopy[i]){
                start=i;
                break;
            }
        } 
       
        for(int j=nums.size()-1;j>-1;j--){
            if(nums[j]!=numsCopy[j]){
                end=j;
                break;
            }
        }
        if(end == -1 && start == -1)
            return 0;
        
        return end-start+1;
    }
};
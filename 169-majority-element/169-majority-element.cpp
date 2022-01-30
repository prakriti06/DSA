class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int j = nums[0];
        int cnt = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==j)
                cnt++;
            else 
                cnt--;
            if(cnt==0){
                j = nums[i];
                cnt = 1;
            }
        }
        return j;
    }
};
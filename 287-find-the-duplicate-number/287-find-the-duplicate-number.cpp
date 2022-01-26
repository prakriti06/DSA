class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int start = 1, end = nums.size()-1;
        while(start<end){
            int mid = (start+end)/2;
            int count = 0;
            for(auto i : nums){
                if(i <= mid)
                    count++;
            }
            if(count>mid)
                end = mid;
            else 
                start = mid+1;
        }
        return start;
    }
};

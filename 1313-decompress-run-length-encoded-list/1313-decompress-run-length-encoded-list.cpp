class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        int i = 0;
        while(2*i < nums.size()){
            int j = nums[2*i];
            int k = nums[2*i+1];
            while(j--){
                res.push_back(k);
            }
            i++;
        }
        return res;
    }
};
class Solution {
public:
    void find(int idx, vector<int>& nums, vector<vector<int>>& res, vector<int>& ds){
        res.push_back(ds);
        
        for(int i=idx; i<nums.size(); i++){
            ds.push_back(nums[i]);
            find(i+1, nums, res, ds);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> res;
        find(0, nums, res, ds);
        
        return res;
    }
};
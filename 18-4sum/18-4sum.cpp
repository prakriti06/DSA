class Solution {
public:
     vector<vector<int>> res;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> com;

        dfs(nums, target, com, 4, 0);
        return res;
    }
    
    void dfs(vector<int>& nums, int target, vector<int>& com, int k, int level) {
        
        int avg = target / k;
        if (level == nums.size() || nums[level] > avg || nums.back() < avg) 
            return;
        
        if (k == 2) {
            vector<vector<int>> curr = twosum(nums, level, target);
            for (auto& v : curr) {
                vector<int> com2(com.begin(), com.end());
                com2.insert(com2.end(), v.begin(), v.end());
                res.push_back(com2);
            }
            return;
        }
            
        
        for (int i = level; i < nums.size(); ++i) {
            if (i != level && nums[i] == nums[i-1]) continue;
            com.push_back(nums[i]);
            dfs(nums, target - nums[i], com, k-1, i+1);
            com.pop_back();
        }           
        
    }
    
    vector<vector<int>> twosum(vector<int>& nums, int start, int target) {
        vector<vector<int>> res;
        int l  = start, r = nums.size()-1;
        while(l < r) {
            if (nums[l] + nums[r] == target) {
                res.push_back({nums[l], nums[r]});
                while(l < r && nums[l] == nums[l+1]) l++;
                l++;
                while(l < r && nums[r] == nums[r-1]) r--;
                r--;
            }
            else if (nums[l] + nums[r] < target) {
                while(l < r && nums[l] == nums[l+1]) l++;
                l++;
            }
            else {
                while(l < r && nums[r] == nums[r-1]) r--;
                r--; 
            }
        }
        return res;
    }
};
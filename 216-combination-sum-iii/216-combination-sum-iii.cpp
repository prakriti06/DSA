class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        find(1, res, temp, k, n);
        
        return res;
    }
    
    void find(int idx, vector<vector<int>>& res, vector<int>& temp, int k, int n){
        if(n == 0 and temp.size() == k){
            res.push_back(temp);
            return;
        }
        for(int i=idx; i<=9; i++){
            temp.push_back(i);
            find(i+1, res, temp, k, n-i);
            temp.pop_back();
        }
    }
};
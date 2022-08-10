class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        vector<vector<int>> res;
        sort(num.begin(), num.end());
        vector<int> temp;
        find(res, 0, target, temp, num);

        return res;
    }
    
    void find(vector<vector<int>>& res, int idx, int target, vector<int>& temp, vector<int>& num){
        if(target == 0){
            res.push_back(temp);
            return;
        }
        for(int i=idx; i<num.size(); i++){
            if(num[i]>target) 
                return;
            if(i>idx and num[i]==num[i-1]) 
                continue;
            temp.push_back(num[i]);
            find(res, i+1, target-num[i], temp, num); 
            temp.pop_back();
        }
    }
};
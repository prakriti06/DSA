class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        
        for(int i=1, j=0; i<intervals.size(); i++){
            if(res[j][1] >= intervals[i][0])
                res[j][1] = max(intervals[i][1], res[j][1]);
            
            else{
                res.push_back(intervals[i]);
                j++;
            }
        }
        return res;
    }
};
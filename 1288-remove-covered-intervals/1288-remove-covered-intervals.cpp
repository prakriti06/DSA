class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
          sort(intervals.begin(), intervals.end(), 
             [] (const vector<int>& v1, const vector<int>& v2) { 
                 if(v1[0] != v2[0]) return v1[0] < v2[0];
                 else return v1[1] > v2[1];
        });
        int count = intervals.size(), end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][1] <= end) {
                count--;
            }
            end = max(end, intervals[i][1]);
        }
        return count;
    }
};
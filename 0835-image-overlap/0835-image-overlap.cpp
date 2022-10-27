class Solution {
public:
    vector<pair<int, int>> nonZeroCells(vector<vector<int>>& img){
       
        vector<pair<int, int>> res;
        for(int i = 0; i < img.size(); i++){
            for(int j = 0; j < img.size(); j++){
                if(img[i][j] == 1)
                    res.push_back({i,j});
            }
        }
        return res;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int, int>> AOnes = nonZeroCells(img1); // {row, col}
        vector<pair<int, int>> BOnes = nonZeroCells(img2);
        int maxOverlaps = 0;
        
        map<pair<int, int>, int> groupCount;
        for(auto a: AOnes){
            for(auto b: BOnes){
                pair<int, int> val = {b.first-a.first, b.second-a.second};
                // same overlapping zone would share the same relative positional differnece(linear transformation vector).
                groupCount[val]++;
                maxOverlaps = max(maxOverlaps, groupCount[val]);
            }
        }
        return maxOverlaps;
        
    }
};
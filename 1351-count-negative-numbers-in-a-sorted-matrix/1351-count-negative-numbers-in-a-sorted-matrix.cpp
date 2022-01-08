class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size(); 
        int res = 0;
        for (int i = 0; i < row; i++) {
            
            if (grid[i][0] < 0) {
                res+=col;
                continue;
            }
            
            if (grid[i][col - 1] > 0)
                continue;
           
            int l = 0, r = col-1;
            while (l <= r) {
                int m = (r + l)/2;
                if (grid[i][m] < 0) {
                    r = m - 1;
                } else
                    l = m + 1;
            }
            
            res += (col - l); 
        }
        return res;
    }
};
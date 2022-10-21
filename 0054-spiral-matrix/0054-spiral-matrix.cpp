class Solution {
public:
    void helper(vector<vector<int>> &grid, int i, int j, int m, int n, vector<int> &res){
        if(i<0 || j<0 || i>=m || j>=n)
            return;
        if(grid[i][j]==INT_MAX)
            return;
        
        res.push_back(grid[i][j]);
        grid[i][j]=INT_MAX;

        if(i<=j+1)helper(grid,i,j+1,m,n,res); // right
        helper(grid,i+1,j,m,n,res); // down
        helper(grid,i,j-1,m,n,res); // left
        helper(grid,i-1,j,m,n,res); // up
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<int> res;
        helper(matrix,0,0,m,n,res);
        return res;
    }
};
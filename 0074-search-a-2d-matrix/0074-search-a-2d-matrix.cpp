class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int row = 0, col = m-1;
        while(row<n and col>-1){
            int search = matrix[row][col];
            if(search == target)
                return 1;
            if(search < target)
                row++;
            else 
                col--;
        }
        return 0;
    }
};
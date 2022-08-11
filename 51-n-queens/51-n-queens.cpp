class Solution {
public:
    void backtrack(int col, vector<string>& board, vector<vector<string>>& res, vector<int>& leftRow, vector<int>& upperDia, vector<int>& lowerDia){
        int n = board.size();
        if(col == n){
            res.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(leftRow[row] == 0 and lowerDia[row+col] == 0 and upperDia[n-1+col-row] == 0){
                board[row][col] = 'Q';
                leftRow[row] = 1;
                upperDia[n-1+col-row] = 1;
                lowerDia[row+col] = 1;
            
                backtrack(col+1, board, res, leftRow, upperDia, lowerDia);
                board[row][col] = '.';
                leftRow[row] = 0;
                upperDia[n-1+col-row] = 0;
                lowerDia[row+col] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i] = s;
        }
        vector<vector<string>> res;
        vector<int> leftRow(n, 0);
        vector<int> upperDia(2*n-1, 0);
        vector<int> lowerDia(2*n-1, 0);
        backtrack(0, board, res, leftRow, upperDia, lowerDia);
        
        return res;
    }
};
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>& matrix)  {
        vector<int>ans;
        int n = matrix.size();  
        int m = matrix[0].size();  
        
        int startRow = 0;
        int endRow = n -1 ;
        int startCol = 0;
        int endCol = m - 1;
        
        int totalElements = n*m;
        int count = 0;
        
        
        while(count < totalElements){
          for(int i = startCol;i<=endCol && count<totalElements;i++){
           ans.push_back(matrix[startRow][i]);
              count++;
          }
         startRow++;
            
          for(int i = startRow;i<=endRow && count<totalElements;i++){
           ans.push_back(matrix[i][endCol]);
              count++;            
          }
         endCol--;
            
          for(int i = endCol;i>=startCol && count<totalElements;i--){
           ans.push_back(matrix[endRow][i]);
              count++;            
          }            
          endRow--;
            
          for(int i = endRow;i>=startRow && count<totalElements;i--)
          {
             ans.push_back(matrix[i][startCol]);
              count++;
          }
          startCol++;  
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
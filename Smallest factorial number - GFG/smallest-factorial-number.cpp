// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int findNum(int n){
            int start = 1, end = n*5;
            while(start<end){
                int mid = (start+end)/2;
                int count = 0;
                for(int i=5; i<=mid; i*=5){
                    count += mid/i;
                }
                if(count<n)
                    start = mid+1;
                else 
                    end = mid;
            }
            return start;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends
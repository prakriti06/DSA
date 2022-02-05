// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int maxlen = 0;
       unordered_map<long,int> umap;
       long sum = 0;
       for(auto i=0;i<A.size();i++){
           sum+=A[i];
           if(sum==0){
               maxlen = max(maxlen,i+1);
           }
           if(umap.find(sum) == umap.end())
               umap[sum] = i; //new entry
           else{
               maxlen = max(maxlen,i-umap[sum]); //this sum is seen before
           }
       }
       return maxlen;    
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
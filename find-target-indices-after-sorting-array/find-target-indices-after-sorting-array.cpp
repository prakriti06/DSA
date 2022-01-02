class Solution {
public:
    
    int LB(vector<int>& arr, int x){
    int l=0, r=arr.size()-1, mid, ans=-1;
    while(l<=r){
        mid= l+(r-l)/2;
        if(arr[mid]==x){
            r=mid-1;
            ans= mid;
        }
        else if(arr[mid]>x)
            r=mid-1;
        else{
            l=mid+1;
        }
    }
    return ans;
}
    
    int UB(vector<int>& arr, int x){
    int l=0, r=arr.size()-1, mid, ans=-1;
    while(l<=r){
        mid= l+(r-l)/2;
        if(arr[mid]==x){
            l=mid+1;
            ans=mid;
        }
        else if(arr[mid]<x)
            l=mid+1;
        else{
            r=mid-1;
        }
    }
    return ans;
}
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int lb=LB(nums, target);
        int ub=UB(nums, target);
        if((lb==-1)&&(ub==-1))
            return {};
        for(int i=lb; i<=ub; ++i){
            res.push_back(i);
        }
        return res;
    }    
};        
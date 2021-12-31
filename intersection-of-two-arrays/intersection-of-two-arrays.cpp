class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums2.begin(),nums2.end());
       // sort(nums1.begin(),nums1.end());
        
        for(int i=0;i<nums1.size();i++){
            int l=0,h=nums2.size()-1,mid;
            
            while(l<=h){
                mid=l+(h-l)/2;
                
                if(nums2[mid]==nums1[i]){
                    if(find(res.begin(),res.end(),nums2[mid])!=res.end())
                        break;
                    res.push_back(nums1[i]);
                    break;
                }
                
                else if(nums2[mid]>nums1[i])
                    h=mid-1;
                else 
                    l=mid+1;
            }
        }
       // res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};
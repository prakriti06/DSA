class Solution {
public:
      vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
      //  sort(aliceSizes.begin(), aliceSizes.end());
        sort(bobSizes.begin(), bobSizes.end());
        int totalA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int totalB = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        vector<int> ans;
        for(int i = 0; i< aliceSizes.size(); i++){
            int seek = (totalA + totalB)/2 - totalA + aliceSizes[i];
            int low = 0, high = bobSizes.size() - 1;
            while(low <= high){
                int mid = low + (high - low)/2;
                if(bobSizes[mid] == seek){
                    ans = {aliceSizes[i], bobSizes[mid]};
                    return ans;
                }
                else if(bobSizes[mid] > seek) high = mid - 1;
                else low = mid + 1;
            }
        }
        return ans;
    }
};

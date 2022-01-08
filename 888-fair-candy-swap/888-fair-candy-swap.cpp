class Solution {
public:
      vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
      //  sort(aliceSizes.begin(), aliceSizes.end());
        sort(bobSizes.begin(), bobSizes.end());
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);
      
        for(int i = 0; i< aliceSizes.size(); i++){
            int diff = (sumB - sumA)/2; 
            int target = diff + aliceSizes[i];
            int low = 0, high = bobSizes.size() - 1;
            while(low <= high){
                int mid = (high + low)/2;
                if(bobSizes[mid] == target){
                    return {aliceSizes[i], bobSizes[mid]};
                    
                }
                else if(bobSizes[mid] > target) high = mid - 1;
                else low = mid + 1;
            }
        }
        return {};
    }
};

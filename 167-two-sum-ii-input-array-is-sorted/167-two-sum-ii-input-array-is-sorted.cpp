class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size()-1;i++){
        int l=0, r=numbers.size()-1,mid;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            if(numbers[mid]+numbers[i]==target){
                 if(mid==i)
                    {
                        if(numbers[i]+numbers[mid+1]==target)
                            mid++;
                        else if(numbers[i]+numbers[mid-1]==target)
                            mid--;
                    }
                return {i+1,mid+1};
            }
            else if(numbers[mid]+numbers[i]<target)
                l=mid+1;
            else
                r=mid-1;
        }
    }
      return {};
    }
};
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int max = INT_MIN;
        for(int i=0; i<candies.size(); i++){
            if(max<candies[i])
                max = candies[i];
        }
        
         for(int i=0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= max)
                res.push_back(true);
            else
                res.push_back(false);
        }
        
        return res;
    }
};
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int cnt = 0, max = 0;
        for (vector<int>rectangle: rectangles) {
	
            int side = min(rectangle[0], rectangle[1]); 
            if (side > max) { 
                cnt = 1; 
                max = side; 
            }
            else if (side == max) { 
                cnt++; 
            }
        }
        return cnt;
    }
};
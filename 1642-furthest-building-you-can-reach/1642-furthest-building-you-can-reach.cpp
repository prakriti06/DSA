class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue <int> p;
        
        if (heights.size() == 1)
            return 0;
        
        for(int i = 1; i < heights.size(); i++){
            int diff = heights[i] - heights[i-1];
            
            if(diff > 0){
                p.push(diff);
                bricks -= diff;
                
                if(bricks < 0){
                    
                    if(ladders <= 0)
                        return i-1;
                    else{
                        int temp = p.top();
                        p.pop();
                        bricks += temp;
                        ladders--;
                    }
                    
                }
            }
             
        }
        return heights.size()-1;
    }
};
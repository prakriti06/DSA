class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int ans = 0 , n = plantTime.size();
        vector<pair<int , int>> v(n);
        int ptemp = 0;
        
        for(int i=0 ; i<n ; i++)
            v[i] = {growTime[i] , plantTime[i]}; 
        
        sort(v.rbegin() , v.rend());
        
        for(int i=0 ; i<n ; i++){
            ans = max(ans , v[i].first + v[i].second + 1 + ptemp);
            ptemp += v[i].second;      
        }
        return ans-1;
    }
};
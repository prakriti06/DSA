class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& A, int k) {
        map<int , vector<int>>g;
        for(int i=0 ; i < A.size() ; i++){
            g[A[i]].push_back(i);
        }
        for(auto i : g){
            vector<int>v = i.second;
            if(v.size() > 1){
                for(int j = 0 ; j < v.size()-1 ; j++){
                    if(abs(v[j] - v[j+1]) <= k)
                        return true;
                }
            }
        }
        return false;
    }
};